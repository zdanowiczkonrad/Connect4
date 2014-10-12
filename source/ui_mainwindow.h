/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 5. Jun 13:41:00 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNowa_gra;
    QAction *actionOpcje;
    QAction *actionNajlepsze_wyniki;
    QAction *actionZako_cz;
    QAction *actionZasady_gry;
    QAction *actionO_autorze;
    QAction *menu_nowaGra;
    QAction *action_Opcje;
    QAction *menu_zakoncz;
    QAction *menu_zGraczem;
    QAction *menu_zKomputerem;
    QAction *actionZasady_gry_2;
    QAction *actionJak_gra;
    QAction *actionKonrad_Zdanowicz;
    QAction *actionZdanowicz_konrad_gmail_com;
    QAction *menu_pomoc;
    QAction *actionZapi_sz;
    QAction *action_Wczytaj;
    QAction *action1_atwy;
    QAction *action2_Normalny;
    QAction *actionTrudny;
    QWidget *centralWidget;
    QLabel *grafika_tlo;
    QLabel *grafika_plansza;
    QTextEdit *textEdit;
    QLabel *status;
    QWidget *gridLayoutWidget;
    QGridLayout *plansza_grid;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_21;
    QLabel *label_26;
    QLabel *label_25;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_47;
    QLabel *label_48;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_51;
    QLabel *label_52;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *ikona_obecnego_ruchu;
    QMenuBar *menuBar;
    QMenu *menuGra;
    QMenu *menuOpcje;
    QMenu *menuO_autorze;
    QMenu *menu_Poziom_trudno_ci;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(449, 545);
        MainWindow->setMinimumSize(QSize(449, 545));
        MainWindow->setMaximumSize(QSize(449, 545));
        MainWindow->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/grafika/ikona.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNowa_gra = new QAction(MainWindow);
        actionNowa_gra->setObjectName(QString::fromUtf8("actionNowa_gra"));
        actionOpcje = new QAction(MainWindow);
        actionOpcje->setObjectName(QString::fromUtf8("actionOpcje"));
        actionNajlepsze_wyniki = new QAction(MainWindow);
        actionNajlepsze_wyniki->setObjectName(QString::fromUtf8("actionNajlepsze_wyniki"));
        actionZako_cz = new QAction(MainWindow);
        actionZako_cz->setObjectName(QString::fromUtf8("actionZako_cz"));
        actionZasady_gry = new QAction(MainWindow);
        actionZasady_gry->setObjectName(QString::fromUtf8("actionZasady_gry"));
        actionO_autorze = new QAction(MainWindow);
        actionO_autorze->setObjectName(QString::fromUtf8("actionO_autorze"));
        menu_nowaGra = new QAction(MainWindow);
        menu_nowaGra->setObjectName(QString::fromUtf8("menu_nowaGra"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ikony/controller.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu_nowaGra->setIcon(icon1);
        menu_nowaGra->setIconVisibleInMenu(true);
        action_Opcje = new QAction(MainWindow);
        action_Opcje->setObjectName(QString::fromUtf8("action_Opcje"));
        menu_zakoncz = new QAction(MainWindow);
        menu_zakoncz->setObjectName(QString::fromUtf8("menu_zakoncz"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ikony/door_open.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu_zakoncz->setIcon(icon2);
        menu_zakoncz->setIconVisibleInMenu(true);
        menu_zGraczem = new QAction(MainWindow);
        menu_zGraczem->setObjectName(QString::fromUtf8("menu_zGraczem"));
        menu_zGraczem->setCheckable(false);
        menu_zGraczem->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ikony/group.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu_zGraczem->setIcon(icon3);
        menu_zGraczem->setIconVisibleInMenu(true);
        menu_zKomputerem = new QAction(MainWindow);
        menu_zKomputerem->setObjectName(QString::fromUtf8("menu_zKomputerem"));
        menu_zKomputerem->setCheckable(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/ikony/computer.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu_zKomputerem->setIcon(icon4);
        menu_zKomputerem->setSoftKeyRole(QAction::NoSoftKey);
        menu_zKomputerem->setIconVisibleInMenu(true);
        actionZasady_gry_2 = new QAction(MainWindow);
        actionZasady_gry_2->setObjectName(QString::fromUtf8("actionZasady_gry_2"));
        actionJak_gra = new QAction(MainWindow);
        actionJak_gra->setObjectName(QString::fromUtf8("actionJak_gra"));
        actionKonrad_Zdanowicz = new QAction(MainWindow);
        actionKonrad_Zdanowicz->setObjectName(QString::fromUtf8("actionKonrad_Zdanowicz"));
        actionKonrad_Zdanowicz->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/ikony/information.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionKonrad_Zdanowicz->setIcon(icon5);
        actionKonrad_Zdanowicz->setIconVisibleInMenu(true);
        actionZdanowicz_konrad_gmail_com = new QAction(MainWindow);
        actionZdanowicz_konrad_gmail_com->setObjectName(QString::fromUtf8("actionZdanowicz_konrad_gmail_com"));
        actionZdanowicz_konrad_gmail_com->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/ikony/drink.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZdanowicz_konrad_gmail_com->setIcon(icon6);
        actionZdanowicz_konrad_gmail_com->setIconVisibleInMenu(true);
        menu_pomoc = new QAction(MainWindow);
        menu_pomoc->setObjectName(QString::fromUtf8("menu_pomoc"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/ikony/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu_pomoc->setIcon(icon7);
        menu_pomoc->setIconVisibleInMenu(true);
        actionZapi_sz = new QAction(MainWindow);
        actionZapi_sz->setObjectName(QString::fromUtf8("actionZapi_sz"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/ikony/disk.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZapi_sz->setIcon(icon8);
        actionZapi_sz->setVisible(false);
        actionZapi_sz->setIconVisibleInMenu(true);
        action_Wczytaj = new QAction(MainWindow);
        action_Wczytaj->setObjectName(QString::fromUtf8("action_Wczytaj"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/ikony/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Wczytaj->setIcon(icon9);
        action_Wczytaj->setVisible(false);
        action_Wczytaj->setSoftKeyRole(QAction::NoSoftKey);
        action_Wczytaj->setIconVisibleInMenu(true);
        action1_atwy = new QAction(MainWindow);
        action1_atwy->setObjectName(QString::fromUtf8("action1_atwy"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/ikony/sport_shuttlecock.png"), QSize(), QIcon::Normal, QIcon::Off);
        action1_atwy->setIcon(icon10);
        action2_Normalny = new QAction(MainWindow);
        action2_Normalny->setObjectName(QString::fromUtf8("action2_Normalny"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/ikony/sport_basketball.png"), QSize(), QIcon::Normal, QIcon::Off);
        action2_Normalny->setIcon(icon11);
        actionTrudny = new QAction(MainWindow);
        actionTrudny->setObjectName(QString::fromUtf8("actionTrudny"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/ikony/sport_football.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTrudny->setIcon(icon12);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        grafika_tlo = new QLabel(centralWidget);
        grafika_tlo->setObjectName(QString::fromUtf8("grafika_tlo"));
        grafika_tlo->setGeometry(QRect(0, -1, 500, 550));
        grafika_tlo->setPixmap(QPixmap(QString::fromUtf8(":/grafika/background.png")));
        grafika_plansza = new QLabel(centralWidget);
        grafika_plansza->setObjectName(QString::fromUtf8("grafika_plansza"));
        grafika_plansza->setGeometry(QRect(30, 155, 390, 340));
        grafika_plansza->setCursor(QCursor(Qt::ArrowCursor));
        grafika_plansza->setMouseTracking(false);
        grafika_plansza->setPixmap(QPixmap(QString::fromUtf8(":/grafika/board.png")));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 548, 451, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Lucida Console"));
        font.setPointSize(10);
        textEdit->setFont(font);
        status = new QLabel(centralWidget);
        status->setObjectName(QString::fromUtf8("status"));
        status->setGeometry(QRect(231, 27, 211, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        status->setFont(font1);
        status->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 170, 358, 302));
        plansza_grid = new QGridLayout(gridLayoutWidget);
        plansza_grid->setSpacing(0);
        plansza_grid->setContentsMargins(11, 11, 11, 11);
        plansza_grid->setObjectName(QString::fromUtf8("plansza_grid"));
        plansza_grid->setSizeConstraint(QLayout::SetFixedSize);
        plansza_grid->setContentsMargins(4, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setEnabled(true);
        label_4->setMinimumSize(QSize(50, 50));
        label_4->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_4, 0, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setEnabled(true);
        label_7->setMinimumSize(QSize(50, 50));
        label_7->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_7, 0, 5, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setEnabled(true);
        label_8->setMinimumSize(QSize(50, 50));
        label_8->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_8, 5, 3, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setEnabled(true);
        label_10->setMinimumSize(QSize(50, 50));
        label_10->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_10, 1, 4, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setEnabled(true);
        label_11->setMinimumSize(QSize(50, 50));
        label_11->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_11, 2, 3, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setEnabled(true);
        label_12->setMinimumSize(QSize(50, 50));
        label_12->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_12, 2, 2, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setEnabled(true);
        label_13->setMinimumSize(QSize(50, 50));
        label_13->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_13, 0, 6, 1, 1);

        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setEnabled(true);
        label_14->setMinimumSize(QSize(50, 50));
        label_14->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_14, 3, 3, 1, 1);

        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setEnabled(true);
        label_15->setMinimumSize(QSize(50, 50));
        label_15->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_15, 4, 3, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setEnabled(true);
        label_16->setMinimumSize(QSize(50, 50));
        label_16->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_16, 3, 4, 1, 1);

        label_17 = new QLabel(gridLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setEnabled(true);
        label_17->setMinimumSize(QSize(50, 50));
        label_17->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_17, 4, 5, 1, 1);

        label_21 = new QLabel(gridLayoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setEnabled(true);
        label_21->setMinimumSize(QSize(50, 50));
        label_21->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_21, 4, 6, 1, 1);

        label_26 = new QLabel(gridLayoutWidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setEnabled(true);
        label_26->setMinimumSize(QSize(50, 50));
        label_26->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_26, 5, 5, 1, 1);

        label_25 = new QLabel(gridLayoutWidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setEnabled(true);
        label_25->setMinimumSize(QSize(50, 50));
        label_25->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_25, 5, 6, 1, 1);

        label_27 = new QLabel(gridLayoutWidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setEnabled(true);
        label_27->setMinimumSize(QSize(50, 50));
        label_27->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_27, 3, 6, 1, 1);

        label_28 = new QLabel(gridLayoutWidget);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setEnabled(true);
        label_28->setMinimumSize(QSize(50, 50));
        label_28->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_28, 5, 4, 1, 1);

        label_29 = new QLabel(gridLayoutWidget);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setEnabled(true);
        label_29->setMinimumSize(QSize(50, 50));
        label_29->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_29, 4, 4, 1, 1);

        label_30 = new QLabel(gridLayoutWidget);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setEnabled(true);
        label_30->setMinimumSize(QSize(50, 50));
        label_30->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_30, 3, 5, 1, 1);

        label_32 = new QLabel(gridLayoutWidget);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setEnabled(true);
        label_32->setMinimumSize(QSize(50, 50));
        label_32->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_32, 2, 6, 1, 1);

        label_33 = new QLabel(gridLayoutWidget);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setEnabled(true);
        label_33->setMinimumSize(QSize(50, 50));
        label_33->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_33, 2, 5, 1, 1);

        label_34 = new QLabel(gridLayoutWidget);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setEnabled(true);
        label_34->setMinimumSize(QSize(50, 50));
        label_34->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_34, 2, 4, 1, 1);

        label_35 = new QLabel(gridLayoutWidget);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setEnabled(true);
        label_35->setMinimumSize(QSize(50, 50));
        label_35->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_35, 1, 5, 1, 1);

        label_36 = new QLabel(gridLayoutWidget);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setEnabled(true);
        label_36->setMinimumSize(QSize(50, 50));
        label_36->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_36, 1, 6, 1, 1);

        label_37 = new QLabel(gridLayoutWidget);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setEnabled(true);
        label_37->setMinimumSize(QSize(50, 50));
        label_37->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_37, 4, 2, 1, 1);

        label_38 = new QLabel(gridLayoutWidget);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setEnabled(true);
        label_38->setMinimumSize(QSize(50, 50));
        label_38->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_38, 5, 2, 1, 1);

        label_39 = new QLabel(gridLayoutWidget);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setEnabled(true);
        label_39->setMinimumSize(QSize(50, 50));
        label_39->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_39, 5, 1, 1, 1);

        label_40 = new QLabel(gridLayoutWidget);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setEnabled(true);
        label_40->setMinimumSize(QSize(50, 50));
        label_40->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_40, 5, 0, 1, 1);

        label_41 = new QLabel(gridLayoutWidget);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setEnabled(true);
        label_41->setMinimumSize(QSize(50, 50));
        label_41->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_41, 4, 1, 1, 1);

        label_42 = new QLabel(gridLayoutWidget);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setEnabled(true);
        label_42->setMinimumSize(QSize(50, 50));
        label_42->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_42, 4, 0, 1, 1);

        label_43 = new QLabel(gridLayoutWidget);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setEnabled(true);
        label_43->setMinimumSize(QSize(50, 50));
        label_43->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_43, 3, 0, 1, 1);

        label_44 = new QLabel(gridLayoutWidget);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setEnabled(true);
        label_44->setMinimumSize(QSize(50, 50));
        label_44->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_44, 3, 1, 1, 1);

        label_45 = new QLabel(gridLayoutWidget);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setEnabled(true);
        label_45->setMinimumSize(QSize(50, 50));
        label_45->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_45, 3, 2, 1, 1);

        label_46 = new QLabel(gridLayoutWidget);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setEnabled(true);
        label_46->setMinimumSize(QSize(50, 50));
        label_46->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_46, 2, 1, 1, 1);

        label_47 = new QLabel(gridLayoutWidget);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setEnabled(true);
        label_47->setMinimumSize(QSize(50, 50));
        label_47->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_47, 2, 0, 1, 1);

        label_48 = new QLabel(gridLayoutWidget);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setEnabled(true);
        label_48->setMinimumSize(QSize(50, 50));
        label_48->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_48, 1, 0, 1, 1);

        label_49 = new QLabel(gridLayoutWidget);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setEnabled(true);
        label_49->setMinimumSize(QSize(50, 50));
        label_49->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_49, 1, 1, 1, 1);

        label_50 = new QLabel(gridLayoutWidget);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setEnabled(true);
        label_50->setMinimumSize(QSize(50, 50));
        label_50->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_50, 1, 2, 1, 1);

        label_51 = new QLabel(gridLayoutWidget);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setEnabled(true);
        label_51->setMinimumSize(QSize(50, 50));
        label_51->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_51, 1, 3, 1, 1);

        label_52 = new QLabel(gridLayoutWidget);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setEnabled(true);
        label_52->setMinimumSize(QSize(50, 50));
        label_52->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_52, 0, 2, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setEnabled(true);
        label_5->setMinimumSize(QSize(50, 50));
        label_5->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_5, 0, 3, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);
        label_3->setMinimumSize(QSize(50, 50));
        label_3->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_3, 0, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setEnabled(true);
        label_6->setMinimumSize(QSize(50, 50));
        label_6->setMaximumSize(QSize(50, 50));

        plansza_grid->addWidget(label_6, 0, 4, 1, 1);

        plansza_grid->setColumnMinimumWidth(0, 50);
        plansza_grid->setColumnMinimumWidth(1, 50);
        plansza_grid->setColumnMinimumWidth(2, 50);
        plansza_grid->setColumnMinimumWidth(3, 50);
        plansza_grid->setColumnMinimumWidth(4, 50);
        plansza_grid->setColumnMinimumWidth(5, 50);
        plansza_grid->setColumnMinimumWidth(6, 50);
        plansza_grid->setRowMinimumHeight(0, 50);
        plansza_grid->setRowMinimumHeight(1, 50);
        plansza_grid->setRowMinimumHeight(2, 50);
        plansza_grid->setRowMinimumHeight(3, 50);
        plansza_grid->setRowMinimumHeight(4, 50);
        plansza_grid->setRowMinimumHeight(5, 50);
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(692, 550, 50, 50));
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(904, 550, 46, 50));
        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setEnabled(true);
        label_22->setGeometry(QRect(580, 550, 50, 50));
        label_22->setMinimumSize(QSize(50, 50));
        label_22->setMaximumSize(QSize(50, 50));
        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(636, 550, 50, 50));
        label_24 = new QLabel(centralWidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(852, 550, 46, 50));
        ikona_obecnego_ruchu = new QLabel(centralWidget);
        ikona_obecnego_ruchu->setObjectName(QString::fromUtf8("ikona_obecnego_ruchu"));
        ikona_obecnego_ruchu->setGeometry(QRect(193, 14, 31, 31));
        ikona_obecnego_ruchu->setPixmap(QPixmap(QString::fromUtf8(":/grafika/red.png")));
        ikona_obecnego_ruchu->setScaledContents(true);
        MainWindow->setCentralWidget(centralWidget);
        grafika_tlo->raise();
        textEdit->raise();
        status->raise();
        gridLayoutWidget->raise();
        label_19->raise();
        label_20->raise();
        label_22->raise();
        label_23->raise();
        label_24->raise();
        ikona_obecnego_ruchu->raise();
        grafika_plansza->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 449, 20));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(236, 236, 236, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(245, 245, 245, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(118, 118, 118, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(157, 157, 157, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        menuBar->setPalette(palette);
        menuGra = new QMenu(menuBar);
        menuGra->setObjectName(QString::fromUtf8("menuGra"));
        menuGra->setGeometry(QRect(278, 101, 124, 106));
        menuGra->setAutoFillBackground(false);
        menuGra->setTearOffEnabled(false);
        menuGra->setSeparatorsCollapsible(true);
        menuOpcje = new QMenu(menuBar);
        menuOpcje->setObjectName(QString::fromUtf8("menuOpcje"));
        menuO_autorze = new QMenu(menuBar);
        menuO_autorze->setObjectName(QString::fromUtf8("menuO_autorze"));
        menu_Poziom_trudno_ci = new QMenu(menuBar);
        menu_Poziom_trudno_ci->setObjectName(QString::fromUtf8("menu_Poziom_trudno_ci"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuGra->menuAction());
        menuBar->addAction(menuOpcje->menuAction());
        menuBar->addAction(menu_Poziom_trudno_ci->menuAction());
        menuBar->addAction(menuO_autorze->menuAction());
        menuGra->addAction(menu_nowaGra);
        menuGra->addAction(actionZapi_sz);
        menuGra->addAction(action_Wczytaj);
        menuGra->addAction(menu_pomoc);
        menuGra->addSeparator();
        menuGra->addAction(menu_zakoncz);
        menuOpcje->addAction(menu_zKomputerem);
        menuOpcje->addAction(menu_zGraczem);
        menuO_autorze->addAction(actionKonrad_Zdanowicz);
        menuO_autorze->addAction(actionZdanowicz_konrad_gmail_com);
        menu_Poziom_trudno_ci->addAction(action1_atwy);
        menu_Poziom_trudno_ci->addAction(action2_Normalny);
        menu_Poziom_trudno_ci->addAction(actionTrudny);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Cztery w rz\304\231dzie", 0, QApplication::UnicodeUTF8));
        actionNowa_gra->setText(QApplication::translate("MainWindow", "Nowa gra", 0, QApplication::UnicodeUTF8));
        actionOpcje->setText(QApplication::translate("MainWindow", "Opcje...", 0, QApplication::UnicodeUTF8));
        actionNajlepsze_wyniki->setText(QApplication::translate("MainWindow", "Najlepsze wyniki", 0, QApplication::UnicodeUTF8));
        actionZako_cz->setText(QApplication::translate("MainWindow", "Zako\305\204cz", 0, QApplication::UnicodeUTF8));
        actionZasady_gry->setText(QApplication::translate("MainWindow", "Zasady gry", 0, QApplication::UnicodeUTF8));
        actionO_autorze->setText(QApplication::translate("MainWindow", "O autorze...", 0, QApplication::UnicodeUTF8));
        menu_nowaGra->setText(QApplication::translate("MainWindow", "&Nowa gra", 0, QApplication::UnicodeUTF8));
        action_Opcje->setText(QApplication::translate("MainWindow", "&Opcje...", 0, QApplication::UnicodeUTF8));
        menu_zakoncz->setText(QApplication::translate("MainWindow", "&Zako\305\204cz", 0, QApplication::UnicodeUTF8));
        menu_zGraczem->setText(QApplication::translate("MainWindow", "gracz vs. gracz", 0, QApplication::UnicodeUTF8));
        menu_zKomputerem->setText(QApplication::translate("MainWindow", "gracz vs. komputer", 0, QApplication::UnicodeUTF8));
        actionZasady_gry_2->setText(QApplication::translate("MainWindow", "Zasady gry", 0, QApplication::UnicodeUTF8));
        actionJak_gra->setText(QApplication::translate("MainWindow", "Jak gra\304\207?", 0, QApplication::UnicodeUTF8));
        actionKonrad_Zdanowicz->setText(QApplication::translate("MainWindow", "autor: Konrad Zdanowicz", 0, QApplication::UnicodeUTF8));
        actionZdanowicz_konrad_gmail_com->setText(QApplication::translate("MainWindow", "kontakt: zdanowicz.konrad@gmail.com", 0, QApplication::UnicodeUTF8));
        menu_pomoc->setText(QApplication::translate("MainWindow", "&Pomoc", 0, QApplication::UnicodeUTF8));
        actionZapi_sz->setText(QApplication::translate("MainWindow", "Zapi&sz...", 0, QApplication::UnicodeUTF8));
        action_Wczytaj->setText(QApplication::translate("MainWindow", "&Wczytaj...", 0, QApplication::UnicodeUTF8));
        action1_atwy->setText(QApplication::translate("MainWindow", "&1. \305\201atwy", 0, QApplication::UnicodeUTF8));
        action2_Normalny->setText(QApplication::translate("MainWindow", "&2. Normalny", 0, QApplication::UnicodeUTF8));
        actionTrudny->setText(QApplication::translate("MainWindow", "&3. Trudny", 0, QApplication::UnicodeUTF8));
        grafika_tlo->setText(QString());
        grafika_plansza->setText(QString());
        status->setText(QString());
        label_4->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        label_14->setText(QString());
        label_15->setText(QString());
        label_16->setText(QString());
        label_17->setText(QString());
        label_21->setText(QString());
        label_26->setText(QString());
        label_25->setText(QString());
        label_27->setText(QString());
        label_28->setText(QString());
        label_29->setText(QString());
        label_30->setText(QString());
        label_32->setText(QString());
        label_33->setText(QString());
        label_34->setText(QString());
        label_35->setText(QString());
        label_36->setText(QString());
        label_37->setText(QString());
        label_38->setText(QString());
        label_39->setText(QString());
        label_40->setText(QString());
        label_41->setText(QString());
        label_42->setText(QString());
        label_43->setText(QString());
        label_44->setText(QString());
        label_45->setText(QString());
        label_46->setText(QString());
        label_47->setText(QString());
        label_48->setText(QString());
        label_49->setText(QString());
        label_50->setText(QString());
        label_51->setText(QString());
        label_52->setText(QString());
        label_5->setText(QString());
        label_3->setText(QString());
        label_6->setText(QString());
        label_19->setText(QString());
        label_20->setText(QString());
        label_22->setText(QString());
        label_23->setText(QString());
        label_24->setText(QString());
        ikona_obecnego_ruchu->setText(QString());
        menuGra->setTitle(QApplication::translate("MainWindow", "&Gra", 0, QApplication::UnicodeUTF8));
        menuOpcje->setTitle(QApplication::translate("MainWindow", "&Tryb gry", 0, QApplication::UnicodeUTF8));
        menuO_autorze->setTitle(QApplication::translate("MainWindow", "O &autorze...", 0, QApplication::UnicodeUTF8));
        menu_Poziom_trudno_ci->setTitle(QApplication::translate("MainWindow", "Poziom trudno\305\233ci &AI", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
