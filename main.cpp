#include <QApplication>
#include <QMainWindow>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QMainWindow window;
    window.setWindowTitle("My Qt Project");
    window.setGeometry(0, 0, 600, 400);
    window.showMaximized();
    window.show();

    return app.exec();
}