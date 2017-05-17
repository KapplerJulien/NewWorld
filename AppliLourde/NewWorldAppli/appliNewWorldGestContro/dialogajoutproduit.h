#ifndef DIALOGAJOUTPRODUIT_H
#define DIALOGAJOUTPRODUIT_H

#include <QDialog>

namespace Ui {
class DialogAjoutProduit;
}

class DialogAjoutProduit : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAjoutProduit(QWidget *parent = 0);
    ~DialogAjoutProduit();

    QString getQte() const;
    void setQte(const QString &value);

    QString getPu() const;
    void setPu(const QString &value);

private:
    Ui::DialogAjoutProduit *ui;
    QString qte;
    QString pu;
};

#endif // DIALOGAJOUTPRODUIT_H
