#include <QGuiApplication>
#include <QQmlContext>
#include <QQuickView>

#include "QDebug"

#include "kostka.h"
#include "gra.h"
#include "Pionekzielony.h"
#include "pionekczerwony.h"
#include "pionekniebieski.h"
#include "pionekzolty.h"

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
    PionekCzerwony c1(50,100);
    PionekNiebieski n1;
    PionekZolty z1;

    //QObject::connect(g,  &Gra::ruszaj, p, &PionekZielony::ruch);
    //QObject::connect(&g, SIGNAL(ruszaj(int)), &g.pionkiZielone[0], SLOT(ruch(int)));
    QObject::connect(&g, SIGNAL(ruszaj(int)), &c1, SLOT(ruch(int)));

    context->setContextProperty("m_gra", &g);
    context->setContextProperty("m_pionekCzerwony1", &c1);

    context->setContextProperty("m_pionekZielony1", g.pionkiZielone[0]);
    context->setContextProperty("m_pionekZielony2", g.pionkiZielone[1]);
    context->setContextProperty("m_pionekZielony3", g.pionkiZielone[2]);
    context->setContextProperty("m_pionekZielony4", g.pionkiZielone[3]);

    //qmlRegisterType<Gra>("GraModel", 1, 0, "Gra");

    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setSource(url);
    view.show();

    return app.exec();
}
