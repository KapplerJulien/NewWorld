#include "dialogajoutproduit.h"
#include "ui_dialogajoutproduit.h"

DialogAjoutProduit::DialogAjoutProduit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAjoutProduit)
{
    ui->setupUi(this);
}

DialogAjoutProduit::~DialogAjoutProduit()
{
    delete ui;
}
QString DialogAjoutProduit::getQte() const
{
    return ui->lineEditQte->text();
}

void DialogAjoutProduit::setQte(const QString &value)
{
    qte = value;
}
QString DialogAjoutProduit::getPu() const
{
    return ui->lineEditPu->text();
}

void DialogAjoutProduit::setPu(const QString &value)
{
    pu = value;
}


