//
// Created by ericthomas on 02/12/2019.
//

#include <QtWidgets/QFormLayout>
#include <QtWidgets/QMessageBox>
#include "Fenetre.h"

Fenetre::Fenetre():QWidget() {
    // Construction du bouton
    bouton = new QPushButton(tr("Vérifier"), this);
    boutonquit=new QPushButton(tr("RAZ"),this);
    login=new QLineEdit("",this);
    password=new QLineEdit("",this);
    password->setEchoMode(QLineEdit::Password); //passe en mode password
    formLayout = new QFormLayout;
    formLayout->addRow(tr("login"), login);
    formLayout->addRow(tr("password"), password);
    formLayout->addRow(bouton);
    formLayout->addRow(boutonquit);
    setLayout(formLayout);
    QObject::connect(bouton, SIGNAL(clicked()), this, SLOT(check()));
    QObject::connect(boutonquit, SIGNAL(clicked()), this, SLOT(raz()));
    this->adjustSize();
}

void Fenetre::check() {
    if(login->text()=="admin" && password->text()=="passadmin")
    {
        QMessageBox::information(
                this,
                tr("Autorisation OK"),
                tr("Vos informations sont valides") );
    } else{
        QMessageBox::information(
                this,
                tr("Autorisation refusée"),
                tr("Vos informations ne sont pas valides") );
    }

}

void Fenetre::raz() {
login->clear();
password->clear();
}

Fenetre::~Fenetre() {
    delete (login);
    delete (password);
    delete(formLayout);
    delete(bouton);
    delete (boutonquit);

}
