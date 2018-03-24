#ifndef SCRIPTCREATORUI_H
#define SCRIPTCREATORUI_H

#include <QDialog>

namespace Ui {
class ScriptCreatorUI;
}

class ScriptCreatorUI : public QDialog
{
    Q_OBJECT

public:
    explicit ScriptCreatorUI(QWidget *parent = 0);
    ~ScriptCreatorUI();

private:
    Ui::ScriptCreatorUI *ui;
};

#endif // SCRIPTCREATORUI_H
