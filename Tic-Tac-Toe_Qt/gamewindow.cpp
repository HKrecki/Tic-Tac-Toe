#include "gamewindow.h"
#include "ui_gamewindow.h"

gamewindow::gamewindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gamewindow)
{
    ui->setupUi(this);
    QGraphicsScene* scene = new QGraphicsScene();

    // board frame
    QGraphicsRectItem* rect = new QGraphicsRectItem();
    rect->setRect(0,0,390,390);
    scene->addItem(rect);

    ///////////
    // Dimensions: 390 x 390
    //
    // Only 3x3
    QGraphicsLineItem* firstLeftVerticalLine = new QGraphicsLineItem();
    QGraphicsLineItem* secondLeftVerticalLine = new QGraphicsLineItem();
    QGraphicsLineItem* firstUpHorizontalLine = new QGraphicsLineItem();
    QGraphicsLineItem* secondUpHorizontalLine = new QGraphicsLineItem();

    firstLeftVerticalLine->setLine(0, 130, 390, 130);
    secondLeftVerticalLine->setLine(0, 260, 390, 260);
    firstUpHorizontalLine->setLine(130, 0, 130, 390);
    secondUpHorizontalLine->setLine(260, 0, 260, 390);

    scene->addItem(firstLeftVerticalLine);
    scene->addItem(secondLeftVerticalLine);
    scene->addItem(firstUpHorizontalLine);
    scene->addItem(secondUpHorizontalLine);

    ui->gameWindow_graphicsView->setScene(scene);
}

gamewindow::gamewindow(int t_boardSize ,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gamewindow)
{
    ui->setupUi(this);

    QGraphicsScene* scene = new QGraphicsScene();
    QGraphicsRectItem* rect = new QGraphicsRectItem();
    QPen pen(Qt::black);
    pen.setWidth(5);

    // Draw game board frame //
    rect->setRect(0,0,390,390);
    scene->addItem(rect);


    int yPlusValue = 390/t_boardSize;
    int xPlusValue = 390/t_boardSize;


    // Draw lines on the board
    for(int i = 0, Distance = 0; i<(t_boardSize+1); i++, Distance+=yPlusValue ){
        scene->addLine(Distance, 0, Distance, 390, pen); // Vertical
        scene->addLine(0, Distance, 390, Distance, pen); // Horizontal
    }


    ui->gameWindow_graphicsView->setScene(scene);
}

gamewindow::~gamewindow()
{
    delete ui;
}
