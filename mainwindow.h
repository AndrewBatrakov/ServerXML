#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QtWidgets>

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void slotShowMessage(QString tryIconString);
    void startProcedure();

private slots:
    void slotShowHide();
    void closeEvent(QCloseEvent *);

private:
    QSystemTrayIcon *systemTryIcon;
    QMenu *iconMenu;

    QPushButton *startButton;
};

#endif // MAINWINDOW_H
