#ifndef QTRADERMAINWINDOW_H
#define QTRADERMAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class QTraderMainWindow; }
QT_END_NAMESPACE

class QTraderMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QTraderMainWindow(QWidget *parent = nullptr);
    ~QTraderMainWindow();

private:
    Ui::QTraderMainWindow *ui;
};
#endif // QTRADERMAINWINDOW_H
