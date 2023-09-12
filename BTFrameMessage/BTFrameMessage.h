#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_BTFrameMessage.h"

QT_BEGIN_NAMESPACE
namespace Ui { class BTFrameMessageClass; };
QT_END_NAMESPACE

class BTFrameMessage : public QMainWindow
{
    Q_OBJECT

public:
    BTFrameMessage(QWidget *parent = nullptr);
    ~BTFrameMessage();

private:
    Ui::BTFrameMessageClass *ui;
};
