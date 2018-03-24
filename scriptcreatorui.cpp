#include "scriptcreatorui.h"
#include "ui_scriptcreatorui.h"

ScriptCreatorUI::ScriptCreatorUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ScriptCreatorUI)
{
    ui->setupUi(this);
}

ScriptCreatorUI::~ScriptCreatorUI()
{
    delete ui;
}
