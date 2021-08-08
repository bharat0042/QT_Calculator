#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QPushButton>

#include <cctype>
#include <cmath>

#if _WIN32
#define SEPARATOR '.'
#endif

QT_BEGIN_NAMESPACE

namespace Ui
{
class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
private:
    Q_OBJECT

    Ui::MainWindow* mainWindow;

    QWidget* defaultCalcWidget;
    QWidget* simpleCalcWidget;
    QWidget* comCalcWidget;
    QWidget* mainWidget;

    QGridLayout* defaultCalcLayout;
    QGridLayout* simpleCalcLayout;
    QGridLayout* comCalcLayout;
    QGridLayout* mainLayout;

    bool m_onlyDigits{true};

    void defaultCalcWidgetCreate();
    void simpleCalcWidgetCreate();
    void compCalcWidgetCreate();

    void simpleMode();
    void compMode();

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow();
    bool onlyDigits();
    void setDigits(bool p_newState);

public slots:
    void switchMode();

    void numClicked();
    void unFunClicked();
    void binFunClicked();

    void clearInput();
    void backSpace();
    void equals();
};
#endif // MAINWINDOW_H
