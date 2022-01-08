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



    Gra g;

    context->setContextProperty("m_kostka", &g.k);

    //QObject::connect(g,  &Gra::ruszaj, p, &PionekZielony::ruch);
    //QObject::connect(&g, SIGNAL(ruszaj(int)), &g.pionki[0], SLOT(ruch(int)));


    context->setContextProperty("m_gra", &g);


    context->setContextProperty("m_pionekZielony1", g.pionki[0]);
    context->setContextProperty("m_pionekZielony2", g.pionki[1]);
    context->setContextProperty("m_pionekZielony3", g.pionki[2]);
    context->setContextProperty("m_pionekZielony4", g.pionki[3]);
    context->setContextProperty("m_pionekCzerwony1", g.pionki[4]);
    context->setContextProperty("m_pionekCzerwony2", g.pionki[5]);
    context->setContextProperty("m_pionekCzerwony3", g.pionki[6]);
    context->setContextProperty("m_pionekCzerwony4", g.pionki[7]);
    context->setContextProperty("m_pionekNiebieski1", g.pionki[8]);
    context->setContextProperty("m_pionekNiebieski2", g.pionki[9]);
    context->setContextProperty("m_pionekNiebieski3", g.pionki[10]);
    context->setContextProperty("m_pionekNiebieski4", g.pionki[11]);
    context->setContextProperty("m_pionekZolty1", g.pionki[12]);
    context->setContextProperty("m_pionekZolty2", g.pionki[13]);
    context->setContextProperty("m_pionekZolty3", g.pionki[14]);
    context->setContextProperty("m_pionekZolty4", g.pionki[15]);


    //qmlRegisterType<Gra>("GraModel", 1, 0, "Gra");

    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setSource(url);
    view.show();

    return app.exec();
}
