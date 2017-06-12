#ifndef DIALOGVISITECONTROLEUR_H
#define DIALOGVISITECONTROLEUR_H

#include <QDialog>

namespace Ui {
class DialogVisiteControleur;
}

class DialogVisiteControleur : public QDialog
{
    Q_OBJECT

public:
    explicit DialogVisiteControleur(QString id, QWidget *parent = 0);
    ~DialogVisiteControleur();

private slots:
    void chargementTableau();
private:
    Ui::DialogVisiteControleur *ui;
    QString idControleur;
};

#endif // DIALOGVISITECONTROLEUR_H
