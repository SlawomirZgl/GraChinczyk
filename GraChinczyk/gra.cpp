#include "gra.h"

#include <QQmlEngine>
#include <QUrl>
#include <QQmlComponent>
#include <QQmlProperty>
#include <QQuickView>
#include <QQuickItem>

void Gra::stworzPole()
{

}

Gra::Gra()
{  
}

void Gra::generujPlansze(QQuickView  &view)
{
    view.setSource( QUrl(QStringLiteral("qrc:/Pole.qml")));

    QObject *object=view.rootObject();
    QObject *object2=view.rootObject();
    object->setProperty("width",500);
    object2->setProperty("width",1000);

   // QQmlComponent component(&engine, QUrl(QStringLiteral("qrc:/Pole.qml")));
   // QObject *object = component.create();

    //object->setParent();
   // QQmlProperty(object, "x").write(0);
   // QQmlProperty(object, "y").write(0);


}
