#include "qtradermainwindow.h"
#include "ui_qtradermainwindow.h"

#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QCandlestickSeries>
#include <QtCharts/QChartView>
#include <QtCharts/QValueAxis>
#include <QtCore/QDateTime>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>

QT_CHARTS_USE_NAMESPACE

QTraderMainWindow::QTraderMainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::QTraderMainWindow) {
    ui->setupUi(this);

    QCandlestickSeries *acmeSeries = new QCandlestickSeries();
    acmeSeries->setName("Teste");
    acmeSeries->setIncreasingColor(QColor(Qt::green));
    acmeSeries->setDecreasingColor(QColor(Qt::red));

    QChart *chart = new QChart();
    chart->addSeries(acmeSeries);
    chart->setTitle("Teste");
    chart->setAnimationOptions(QtCharts::QChart::SeriesAnimations);

    chart->createDefaultAxes();

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    setCentralWidget(chartView);
}

QTraderMainWindow::~QTraderMainWindow() { delete ui; }
