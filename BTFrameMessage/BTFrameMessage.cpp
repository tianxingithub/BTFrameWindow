#include "BTFrameMessage.h"
#include "MsgBox.h"

BTFrameMessage::BTFrameMessage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BTFrameMessageClass())
{
    ui->setupUi(this);
    connect(ui->btn_yes, &QPushButton::clicked, this, &BTFrameMessage::btnYesSlot);
    connect(ui->btn_no, &QPushButton::clicked, this, &BTFrameMessage::btnYesSlot);
}

BTFrameMessage::~BTFrameMessage()
{
    delete ui;
}

void BTFrameMessage::btnYesSlot()
{
    auto ti = ui->editTitle->text();
    auto con = ui->editContent->text();
    bool showOK = false;
    if (ui->editOK->text() == "1")
    {
        showOK = true;
    } 

    auto box = new BTMsgBox(ti, con, showOK);
    box->show();
}

void BTFrameMessage::btnNoSlot()
{
    auto box = new BTMsgBox();
    box->show();
}
