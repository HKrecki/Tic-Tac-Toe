#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsRectItem>

#include <QDebug>

namespace Ui {
class gamewindow;
}

class gamewindow : public QWidget
{
    Q_OBJECT

public:
    explicit gamewindow(QWidget *parent = nullptr);
    explicit gamewindow(int t_boardSize, QWidget *parent = nullptr);
    ~gamewindow();



private:
    Ui::gamewindow *ui;
};

#endif // GAMEWINDOW_H
