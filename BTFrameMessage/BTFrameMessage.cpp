#include "BTFrameMessage.h"
#include "MsgBox.h"

BTFrameMessage::BTFrameMessage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BTFrameMessageClass())
{
    ui->setupUi(this);
    connect(ui->btn_yes, &QPushButton::clicked, this, &BTFrameMessage::btnYesSlot);
    connect(ui->btn_no, &QPushButton::clicked, this, &BTFrameMessage::btnNoSlot);
}

BTFrameMessage::~BTFrameMessage()
{
    delete ui;
}

void BTFrameMessage::btnYesSlot()
{
    auto box = new MsgBox();
    box->show();
}

void BTFrameMessage::btnNoSlot()
{
    auto box = new MsgBox();
    box->show();
}
