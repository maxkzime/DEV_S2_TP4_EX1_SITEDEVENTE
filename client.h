// TP4/EX1/client.h
// Exercice 1 : Site de vente
// BODIN Maxime C2
// 22/10/03

#ifndef CLIENT_H
#define CLIENT_H

#include "order.h"

class Client
{
private:
    string itsForename;
    string itsLastname;
    Address *itsAddress;
    vector <Order*> * itsOrder;

public:
    Client(string forename,
           string lastname,
           Address *adress);
    ~Client();

    void addOrder(Order* order);

    void display();
};

#endif // CLIENT_H
