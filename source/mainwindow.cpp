#include <cmath>
#include <QMessageBox>
#include <QtCore/QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "label.h"

















/****************************************************/
/* Klasa: Plansza                                   */
/****************************************************/





//konstruktor

Plansza::Plansza()
{
    int i,j;
    for(i=0;i<=WYSOKOSC_PLANSZY+1;i++)
    {
       for(j=0;j<=SZEROKOSC_PLANSZY+1;j++)
       {
          if(i==0||i==WYSOKOSC_PLANSZY+1||j==0||j==SZEROKOSC_PLANSZY+1)
          {
            plansza[i][j]=-1;
          }
          else
          {
              plansza[i][j]=0;
          }
       }
    }

    czyj_ruch=1;
    komunikat=0;
    stan_planszy=0;
    historia="";
    moves=0;
}





// zwraca korzystnosc ukladu na planszy
// w postaci wagi
// im wieksza tym uklad korzystniejszy dla gracza 1.

int Plansza::OcenKorzystnosc()
{
    int i,j,p,q,stan,licznik,stop=0,waga_ruchu;
    int tab_korzysci[2][5];
    for(i=0;i<2;i++) for(j=0;j<5;j++) tab_korzysci[i][j]=0;

    for(i=1;i<=WYSOKOSC_PLANSZY;i++)
    {
      for(j=1;j<=SZEROKOSC_PLANSZY;j++)
      {

         if(plansza[i][j]<1);
         else
         {
            stan=plansza[i][j];

            //poziom
            p=i;q=j;licznik=1;stop=0;
            while(!stop)
            {
                if(stan==plansza[p][--q]) ++licznik;
                else stop=1;
            }
            if(plansza[i][j-licznik]==0 || plansza[i][j+1]==0 || licznik>3) tab_korzysci[stan-1][licznik]++;

            //pion
            p=i;q=j;licznik=1;stop=0;
            while(!stop)
            {
                if(stan==plansza[--p][q]) ++licznik;
                else stop=1;
            }
            if(plansza[i-licznik][j]==0 || plansza[i+1][j]==0 || licznik>3) tab_korzysci[stan-1][licznik]++;

            //skos w gore/lewo
            p=i;q=j;licznik=1;stop=0;
            while(!stop)
            {
                if(stan==plansza[--p][--q]) ++licznik;
                else stop=1;
            }
            if(plansza[i-licznik][j-licznik]==0 || plansza[i+1][j+1]==0 || licznik>3) tab_korzysci[stan-1][licznik]++;

            //skos w gore/prawo
            p=i;q=j;licznik=1;stop=0;
            while(!stop)
            {
                if(stan==plansza[--p][++q]) ++licznik;
                else stop=1;
            }
            if(plansza[i-licznik][j+licznik]==0 || plansza[i+1][j-1]==0 || licznik>3) tab_korzysci[stan-1][licznik]++;
         }
      }
   }


     if(tab_korzysci[NR_GRACZA_CZLOWIEKA-1][4]) waga_ruchu=MAX_INT;
     else if(tab_korzysci[(NR_GRACZA_CZLOWIEKA)%2][4]) waga_ruchu=MAX_INT*-1;
     else waga_ruchu =
         pow(20*tab_korzysci[NR_GRACZA_CZLOWIEKA-1][3],2)
       + pow(2*tab_korzysci[NR_GRACZA_CZLOWIEKA-1][2],2)
       + tab_korzysci[NR_GRACZA_CZLOWIEKA-1][1]
      - (pow(20*tab_korzysci[(NR_GRACZA_CZLOWIEKA)%2][3],2)
       +pow(2*tab_korzysci[(NR_GRACZA_CZLOWIEKA)%2][2],2)
         +tab_korzysci[(NR_GRACZA_CZLOWIEKA)%2][1])

;
    return waga_ruchu;

}












// funkcja wykonuje ruch, zmienia ustawienia czyj ruch i stanplanszy
// a nastepnie zwraca numer wiersza w ktorym znajduje sie nowy pionek








int  Plansza::WykonajRuch(int kolumna)
{
   int i;
   komunikat=0;
   if(kolumna>0 && kolumna<=SZEROKOSC_PLANSZY)
   {
       for(i=1;i<=WYSOKOSC_PLANSZY && plansza[WYSOKOSC_PLANSZY-i+1][kolumna];i++);
       if(i<=WYSOKOSC_PLANSZY)
       {
          //poprawnie wykonany ruch
          plansza[WYSOKOSC_PLANSZY-i+1][kolumna]=czyj_ruch;
          historia.append(QString("%1").arg(kolumna));
          if (!stany->contains(historia)) stany->insert(historia,OcenKorzystnosc());
          else qDebug()<<"oszczednosc";
          stan_planszy=stany->value(historia);

          ++moves;
          czyj_ruch=czyj_ruch%LICZBA_GRACZY+1;
          komunikat=WYSOKOSC_PLANSZY-i+1;
       }
   }
   return komunikat;
}


int Plansza::SymulujRuch(int gracz,Plansza &b, int glebokosc, int & pole)
{
    //qDebug()<<"wywolanie symuluj"<<gracz<<",pole: "<<pole<<" ("<<glebokosc<<")";
    Plansza c;
    c.stany=stany;
    if(b.stan_planszy==MAX_INT || b.stan_planszy==-MAX_INT || glebokosc>GLEBOKOSC_SYMULACJI)
    return b.stan_planszy;

    int max=-MAX_INT;
    int min=MAX_INT;
    for(int i=1;i<=SZEROKOSC_PLANSZY;i++)
    {
        if(b.plansza[1][i]==0)
        {
            c=b;
            c.WykonajRuch(i);
            if(gracz==1)
            {
                int x=SymulujRuch(2,c,glebokosc+1,pole);
                if(x>max) { max=x; pole=i;}

            }
            else if(gracz==2)
            {
                int x=SymulujRuch(1,c,glebokosc+1,pole);
                if(x<min) { min=x; pole=i;}
            }
        }
    }

    if(gracz==1) return max;
    else if(gracz==2) return min;
    return 1;
}
























MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->status->setText("<font style=\"color: #888;\">Ruch gracza 1 </font>");
    plansza.stany=&Stany;

    
    komputer_gra=1;
    czy_gra_trwa=1;
    kto_wygral=-1;


    Label * button1=new Label(" ",this);
    button1->setGeometry(50,160,50,330);
    button1->setCursor(Qt::PointingHandCursor);
    Label * button2=new Label(" ",this);
    button2->setGeometry(100,160,50,330);
    button2->setCursor(Qt::PointingHandCursor);
    Label * button3=new Label(" ",this);
    button3->setGeometry(150,160,50,330);
    button3->setCursor(Qt::PointingHandCursor);
    Label * button4=new Label(" ",this);
    button4->setGeometry(200,160,50,330);
    button4->setCursor(Qt::PointingHandCursor);
    Label * button5=new Label(" ",this);
    button5->setGeometry(250,160,50,330);
    button5->setCursor(Qt::PointingHandCursor);
    Label * button6=new Label(" ",this);
    button6->setGeometry(300,160,50,330);
    button6->setCursor(Qt::PointingHandCursor);
    Label * button7=new Label(" ",this);
    button7->setGeometry(350,160,50,330);
    button7->setCursor(Qt::PointingHandCursor);

    QObject::connect(ui->menu_nowaGra, SIGNAL(triggered()), this, SLOT(nowaGra()));
    QObject::connect(ui->menu_pomoc, SIGNAL(triggered()), this, SLOT(pomoc()));
    QObject::connect(ui->menu_zKomputerem, SIGNAL(triggered()), this, SLOT(zKomputerem()));
    QObject::connect(ui->menu_zGraczem, SIGNAL(triggered()), this, SLOT(zGraczem()));
    QObject::connect(ui->menu_zakoncz, SIGNAL(triggered()), this, SLOT(zakonczGre()));

    QObject::connect(ui->action1_atwy, SIGNAL(triggered()), this, SLOT(ustawPoziom1()));
    QObject::connect(ui->action2_Normalny, SIGNAL(triggered()), this, SLOT(ustawPoziom2()));
    QObject::connect(ui->actionTrudny, SIGNAL(triggered()), this, SLOT(ustawPoziom3()));
    QObject::connect(button1, SIGNAL(clicked()), this, SLOT(wykonajRuch_1()));
    QObject::connect(button2, SIGNAL(clicked()), this, SLOT(wykonajRuch_2()));
    QObject::connect(button3, SIGNAL(clicked()), this, SLOT(wykonajRuch_3()));
    QObject::connect(button4, SIGNAL(clicked()), this, SLOT(wykonajRuch_4()));
    QObject::connect(button5, SIGNAL(clicked()), this, SLOT(wykonajRuch_5()));
    QObject::connect(button6, SIGNAL(clicked()), this, SLOT(wykonajRuch_6()));
    QObject::connect(button7, SIGNAL(clicked()), this, SLOT(wykonajRuch_7()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::NowaGra()
{
    QPixmap redtile(":/grafika/red.png");
    int ret;
    if(czy_gra_trwa)
    {
        QMessageBox msgBox;
        msgBox.setText("Rozpoczac nowa gre?");
        msgBox.addButton("OK",QMessageBox::AcceptRole);
        msgBox.addButton("Anuluj",QMessageBox::RejectRole);
        msgBox.setIcon(QMessageBox::Question);
        msgBox.setWindowTitle("Nowa gra");
        ret = msgBox.exec();
    }
    else ret=0;

    switch (ret) {
      case 0:
     {
        plansza.moves=0;
        plansza.historia="";
        QLayoutItem *child;
        while ((child = ui->plansza_grid->takeAt(0)) != 0) {
            delete child->widget();
            delete child;
        }
        ui->status->setText("<font style=\"color: #888;\">Ruch gracza 1 </font>");
        ui->ikona_obecnego_ruchu->setPixmap(redtile);
            int i,j;
            for(i=1;i<=WYSOKOSC_PLANSZY;i++)
            {
               for(j=1;j<=SZEROKOSC_PLANSZY;j++)
               {
                  plansza.plansza[i][j]=0;

               }
            }

            plansza.czyj_ruch=1;
            plansza.stan_planszy=0;
            czy_gra_trwa=1;
            kto_wygral=-1;
       }
          break;
      case 1:

          break;
    }


}

void MainWindow::wstawNaPlansze(int y,int x,int kto)
{
    QPixmap redtile(":/grafika/red.png");
    QPixmap yellowtile(":/grafika/yellow.png");
    QLabel * temp=new QLabel(this);

    temp->resize(50,50);

    if(kto==2)
    {
        temp->setPixmap(yellowtile);
        ui->ikona_obecnego_ruchu->setPixmap(redtile);
    }
    else
    {
        temp->setPixmap(redtile);
        ui->ikona_obecnego_ruchu->setPixmap(yellowtile);

    }
    ui->plansza_grid->addWidget(temp,x-1,y-1);


}


void MainWindow::NajlepszeWyniki()
{

}

void MainWindow::Opcje()
{

}

void MainWindow::Pomoc()
{

}

void MainWindow::Credits()
{

}


/////////////////











void MainWindow::nowaGra()
{
   NowaGra();

}

void MainWindow::zKomputerem()
{
    komputer_gra=1;
}

void MainWindow::zGraczem()
{
    komputer_gra=0;
}

void MainWindow::pomoc()
{

    QMessageBox msgBox;

    msgBox.setText("Cel gry: ulozyc cztery klocki tego samego koloru w rzedzie -\n - pionowo, poziomo lub po skosie.\n\nJak grac: kliknij na kolumnie, do ktorej chcesz wrzucic swoj klocek.\n\nPorada: mozesz zmienic tryb gry w menu Opcje.");

    msgBox.setWindowTitle("Pomoc");
    msgBox.exec();
}


void MainWindow::zakonczGre()
{
    QMessageBox msgBox;
    msgBox.setText("Czy na pewno chcesz zakonczyc gre?");
    msgBox.addButton("OK",QMessageBox::AcceptRole);
    msgBox.addButton("Anuluj",QMessageBox::RejectRole);
    msgBox.setIcon(QMessageBox::Question);
    msgBox.setWindowTitle("Zakoncz");
    int ret = msgBox.exec();
    switch (ret) {
      case 0:
              this->close();
          break;
      case 1:

          break;
    }

}

int MainWindow::WezRuchKomputera()
{
    int pole;
    pole=4;

    //wybranie najmniej korzystnego ruchu dla przeciwnika
    int value=plansza.SymulujRuch(2,plansza,0,pole);


    //sprawdzenie czy nie ma ruchu wygrywajacego
    QString historia_copy=plansza.historia;
    int jest_wygrywajacy=0;
    for(int i=1;i<=SZEROKOSC_PLANSZY && !jest_wygrywajacy;i++)
    {
        historia_copy=plansza.historia;
        historia_copy.append(QString("%1").arg(i));
        if(Stany.contains(historia_copy))
            if(Stany.value(historia_copy)==-MAX_INT)
            {
                jest_wygrywajacy=i;
            }
    }

    if(jest_wygrywajacy)
    {
        qDebug()<<"jest ruch wygrywajacy. nadpisuje poprzednia wartosc pola "<<pole<<" nowa wartoscia "<<jest_wygrywajacy<<".";
        pole=jest_wygrywajacy;
    }



    return pole;

}

void MainWindow::przetworzenieRuchu(int a,int b)
{
    if(b)
    {
        if(plansza.czyj_ruch==1)
        {
            wstawNaPlansze(a,b,2);
            ui->status->setText("<font style=\"color: #888;\">Ruch gracza 1 </font>");
        }
        else
        {
         wstawNaPlansze(a,b,1);
         if(komputer_gra)
         {

             ui->status->setText("<font style=\"color: #888;\">Ruch wykonuje komputer... </font>");
             ui->status->show();
             int ruch=WezRuchKomputera();
             int row=plansza.WykonajRuch(ruch);
             przetworzenieRuchu(ruch,row);
          }
         else ui->status->setText("<font style=\"color: #888;\">Ruch gracza 2</font>");
        }
        ui->status->show();
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Wybrana kolumna jest pelna. Wybierz inna kolumne.");
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setWindowTitle("Niepoprawny ruch");
        msgBox.exec();
        plansza.komunikat=0;
    }

    //kontrola zapelnienie planszy
    int kontrola=0;
    for(int i=1;i<=SZEROKOSC_PLANSZY;i++)
    {
        if(plansza.plansza[1][i])++kontrola;
    }
    if(kontrola==7)
    {
        czy_gra_trwa=0;

    }
    else
    {
        if(plansza.stan_planszy==MAX_INT)
        {
            kto_wygral=1;
        czy_gra_trwa=0;
        }
        else if(plansza.stan_planszy==-MAX_INT)
        {
            kto_wygral=2;
            czy_gra_trwa=0;
        }
       }

    if(!czy_gra_trwa)
    {
        if(kto_wygral>0)
        {
            if(kto_wygral==1)
            {
                ui->status->setText("<font style=\"color: #888;\">Wygrana gracza 1!</font>");
                QMessageBox msgBox;
                QString message="";
                message.append(QString("Gracz 1 wygral w %1 ruchach:\n").append(plansza.historia).append("\nNacisnij OK, aby rozpoczac nowa gre.").arg(plansza.moves));
                msgBox.setText(message);
                msgBox.setWindowTitle("Koniec gry");
                msgBox.exec();
            }
            else
            {
               if(komputer_gra) ui->status->setText("<font style=\"color: #888;\">Wygrana komputera!</font>");
               else ui->status->setText("<font style=\"color: #888;\">Wygrana gracza 2!</font>");
               QMessageBox msgBox;
               QString message="";
               if(komputer_gra)
               message.append("Komputer wygral w ");
               else
               message.append("Gracz 2 wygral w ");
               message.append(QString("%1 ruchach:\n").append(plansza.historia).append("\nNacisnij OK, aby rozpoczac nowa gre.").arg(plansza.moves));
               msgBox.setText(message);
               msgBox.setWindowTitle("Koniec gry");
               msgBox.exec();
            }
        }
        else
        {
            ui->status->setText("<font style=\"color: #888;\">Remis.</font>");
            QMessageBox msgBox;
            msgBox.setText("Koniec gry.\n\nNacisnij OK, aby rozpoczac nowa gre.");
            msgBox.setWindowTitle("Koniec gry");
            msgBox.exec();
        }
        NowaGra();
    }
    else if(komputer_gra)
    {

    }
}

int MainWindow::wykonajRuch_1()
{
    int row=plansza.WykonajRuch(1);
    przetworzenieRuchu(1,row);
    return 1;
}
int MainWindow::wykonajRuch_2()
{
    int row=plansza.WykonajRuch(2);
    przetworzenieRuchu(2,row);
    return 1;
}
int MainWindow::wykonajRuch_3()
{
    int row=plansza.WykonajRuch(3);
    przetworzenieRuchu(3,row);
    return 1;
}
int MainWindow::wykonajRuch_4()
{
    int row=plansza.WykonajRuch(4);
    przetworzenieRuchu(4,row);
    return 1;
}
int MainWindow::wykonajRuch_5()
{
    int row=plansza.WykonajRuch(5);
    przetworzenieRuchu(5,row);
    return 1;
}
int MainWindow::wykonajRuch_6()
{
    int row=plansza.WykonajRuch(6);
    przetworzenieRuchu(6,row);
    return 1;
}
int MainWindow::wykonajRuch_7()
{
    int row=plansza.WykonajRuch(7);
    przetworzenieRuchu(7,row);
    return 1;
}
void MainWindow::ustawPoziom(int a)
{
    GLEBOKOSC_SYMULACJI=a;
}

void MainWindow::ustawPoziom1()
{
    ustawPoziom(1);
}
void MainWindow::ustawPoziom2()
{
    ustawPoziom(3);
}
void MainWindow::ustawPoziom3()
{
    ustawPoziom(5);
}
