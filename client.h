#ifndef CLIENT_H
#define CLIENT_H

#include "address.h" // string already include here
#include "order.h"  // vector already include here

using std::string, std::vector;

class Client
{
private:
    string itsForename;
    string itsLastname;
    Address *itsAddress;
    vector <Order*> * itsOrder;

public:
    Client(string forename, string lastname, Address *adress);
    ~Client();

    void addOrder(Order* order);

    void display();
};

#endif // CLIENT_H
