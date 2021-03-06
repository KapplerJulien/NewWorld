#ifndef DIALOGAJOUTVISITE_H
#define DIALOGAJOUTVISITE_H

#include <QDialog>

namespace Ui {
class DialogAjoutVisite;
}

class DialogAjoutVisite : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAjoutVisite(QWidget *parent = 0);
    ~DialogAjoutVisite();

    QString getDateVisite() const;
    void setDateVisite(const QString &value);

    QString getIdControleur();
    void setIdControleur(const QString &value);

private slots:
    void chargementControleur();
private:
    Ui::DialogAjoutVisite *ui;
    QString dateVisite;
    QString idControleur;
};

#endif // DIALOGAJOUTVISITE_H
