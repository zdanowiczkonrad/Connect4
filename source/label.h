#ifndef LABEL_H
#define LABEL_H

#include <QtCore/QDebug>
#include <QtGui/QLabel>

class Label : public QLabel
{
    Q_OBJECT
    public:
        Label( QWidget *parent = 0, Qt::WindowFlags f = 0) :
            QLabel( parent, f ){

            connect( this, SIGNAL( clicked() ), this, SLOT( labelClicked() ));
        }

        Label( const QString &text, QWidget *parent = 0, Qt::WindowFlags f = 0) :
            QLabel( text, parent, f ){

            connect( this, SIGNAL( clicked() ), this, SLOT( labelClicked() ));


        }

    protected:
        void mousePressEvent( QMouseEvent *evt ){
            emit clicked();
        }




    private slots:
        void labelClicked() {
            //qDebug() << "label was clicked";
        }


    signals:
        void clicked();

};

#endif // LABEL_H
