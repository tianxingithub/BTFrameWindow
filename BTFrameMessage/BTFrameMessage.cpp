#include "BTFrameMessage.h"

BTFrameMessage::BTFrameMessage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BTFrameMessageClass())
{
    ui->setupUi(this);
}

BTFrameMessage::~BTFrameMessage()
{
    delete ui;
}

void BTFrameMessage::btnYesSlot()
{

}

void BTFrameMessage::btnNoSlot()
{

}
