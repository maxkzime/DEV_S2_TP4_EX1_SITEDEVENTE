#include "client.h"

#include <iostream>

using std::cout;

Client::Client(std::string forename, std::string lastname, Address *adress) :
    itsForename(forename), itsLastname(lastname), itsAddress(adress)
{
    itsOrder = new vector<Order*>();
}

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
{
    itsOrder->push_back(order);
}

void Client::display()
{
    cout << "Forename : " << itsForename << '\n';
    cout << "Lastname : " << itsLastname << '\n';
    cout << "Address : " << itsAddress << '\n';

    for (auto temp : *itsOrder)
    {
        cout << "\n\n";
        cout << "No : " << temp->getItsNo() << '\n';
        cout << "Price : " << temp->getItsPrice() << '\n';
        cout << "Date : " << temp->getItsDate() << '\n';

    }

}
