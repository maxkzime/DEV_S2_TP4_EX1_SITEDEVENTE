// TP4/EX1/client.cpp
// Exercice 1 : Site de vente
// BODIN Maxime C2
// 22/10/03

#include "client.h"

Client::Client(std::string forename,
               std::string lastname,
               Address *adress)
    :
      itsForename(forename),
      itsLastname(lastname),
      itsAddress(adress),
      itsOrder(new vector<Order*>())
{}

Client::~Client()
{
    while (! itsOrder->empty())
    {
        delete itsOrder->back();
        itsOrder->pop_back();
    }
    delete itsOrder;
}

void Client::addOrder(Order *order)
{itsOrder->push_back(order);}

void Client::display()
{
    cout << "Forename: " << itsForename << '\n'
         << "Lastname: " << itsLastname << '\n'
         << "Address: "; itsAddress->display();
    cout << '\n'
         << "Commandes: ";

    if(!itsOrder->empty()){
        for (Order * tempOrder : *itsOrder){
            cout << '\n';
            tempOrder->display();
        }
    }
    else
        cout << "\nPas de commande pour l'instant\n";
}
