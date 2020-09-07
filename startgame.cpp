#include "startgame.h"
#include "ui_startgame.h"

StartGame::StartGame(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StartGame)
{
    ui->setupUi(this);
    //this->ui->btn_start->setStyleSheet("border:none;");
}

StartGame::~StartGame()
{
    delete ui;
}

