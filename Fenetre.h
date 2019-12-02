//
// Created by ericthomas on 02/12/2019.
//

#ifndef LOGIN_FENETRE_H
#define LOGIN_FENETRE_H

#include <QtWidgets/QFormLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QLineEdit>

class Fenetre: public QWidget {

Q_OBJECT
public:
    Fenetre();

    virtual ~Fenetre();

public slots:
    void check();
    void raz();

private:
    QFormLayout *formLayout; //gestionnaire de placement
    QPushButton *bouton;
    QPushButton *boutonquit;
    QLineEdit *login;
    QLineEdit *password;

};


#endif //LOGIN_FENETRE_H
