#ifndef PIONEK_H
#define PIONEK_H
#include <QObject>
#include <QDebug>
class Pionek : public QObject
{
    Q_OBJECT
protected:
    int index;
    bool wGrze;
    int indexStart;
    int indexStop;
    bool wBoxie;
    int m_x;
    int m_y;
    int m_id;


public:
    Pionek()
    {
        wBoxie=false;
        wGrze=false;
        index=0;
    }    

    int dajIndex(){return  index;}

    bool czyWGrze(){return wGrze;}
    void wyrzuc();
//    virtual void doBoxu(int ruch)=0;
//    virtual void ruchWBoxie()=0;
    int x() const;
    void setX(int a);
    int y() const;
    void setY(int a);
    int id() const;
    void setId(int a);
public slots:
    virtual void ruch(int x)=0;
signals:
    void xChanged();
    void yChanged();
    void idChanged();




};
#endif // PIONEK_H
