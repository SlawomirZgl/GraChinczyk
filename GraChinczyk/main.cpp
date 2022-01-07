#include <QGuiApplication>
#include <QQmlContext>
#include <QQuickView>

#include "QDebug"

#include "kostka.h"
#include "gra.h"
#include "Pionekzielony.h"

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);
    QQuickView view;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QQmlContext* context = view.rootContext();

    Kostka k;
    context->setContextProperty("m_kostka", &k);
    Gra g;
    PionekZielony p;


    //QObject::connect(g,  &Gra::ruszaj, p, &PionekZielony::ruch);


    context->setContextProperty("m_gra", &g);
    context->setContextProperty("m_pionekZielony1", &p);


    //qmlRegisterType<Gra>("GraModel", 1, 0, "Gra");

    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setSource(url);
    view.show();

    return app.exec();
}
