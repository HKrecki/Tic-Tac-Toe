#include "gamewindow.h"
#include "ui_gamewindow.h"

gamewindow::gamewindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gamewindow)
{
    ui->setupUi(this);

    QGraphicsScene* scene = new QGraphicsScene();

    // test

    QGraphicsRectItem* rect = new QGraphicsRectItem();
    rect->setRect(0,0,50,50);

    scene->addItem(rect);

    ui->gameWindow_graphicsView->setScene(scene);


    // test



}

gamewindow::~gamewindow()
{
    delete ui;
}
