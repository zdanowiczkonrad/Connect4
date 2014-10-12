#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>

//definicje rozmiaru planszy
const int SZEROKOSC_PLANSZY=7;
const int WYSOKOSC_PLANSZY=6;
const int LICZBA_GRACZY=2;
const int ILE_W_LINII_WYGRYWA=4;
const int MAX_INT=9999999;
const int NR_GRACZA_CZLOWIEKA=1;
static int GLEBOKOSC_SYMULACJI=3;


class Plansza {
public:
   int plansza[WYSOKOSC_PLANSZY+2][SZEROKOSC_PLANSZY+2];
   int stan_planszy;
   int czyj_ruch;
   int komunikat;
   QMap<QString,int> * stany;

   Plansza();
   int OcenKorzystnosc();
   int WykonajRuch(int);
   int SymulujRuch(int,Plansza&,int,int&);
   QString historia;
   int moves;
};

namespace Ui {
    class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Plansza plansza;
    QMap < QString,int > Stany;


    int komputer_gra;
    int czy_gra_trwa;
    int kto_wygral;

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public slots:
    void nowaGra();
    void zKomputerem();
    void zGraczem();
    void pomoc();
    void zakonczGre();
    void wstawNaPlansze(int,int,int);
    void przetworzenieRuchu(int,int);

    int WezRuchKomputera();

    int wykonajRuch_1();
    int wykonajRuch_2();
    int wykonajRuch_3();
    int wykonajRuch_4();
    int wykonajRuch_5();
    int wykonajRuch_6();
    int wykonajRuch_7();

    void ustawPoziom(int);
    void ustawPoziom1();
    void ustawPoziom2();
    void ustawPoziom3();
    void NowaGra();
    void NajlepszeWyniki();
    void Opcje();
    void Pomoc();
    void Credits();

};

#endif // MAINWINDOW_H
