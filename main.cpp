#include <QApplication>
#include <QQmlApplicationEngine>

int main(int argc, char **argv) {
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
//    QApplication app (argc, argv);
//
//    QWidget window;
//    window.setFixedSize(100, 50);
//
//
//    QPushButton button ("Hello world !", &window);
//
//
//    window.show();

//    return app.exec();
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}