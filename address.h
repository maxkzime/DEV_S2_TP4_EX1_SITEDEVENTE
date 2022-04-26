// TP4/EX1/address.h
// Exercice 1 : Site de vente
// BODIN Maxime C2
// 22/10/03

#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
#include <iostream>

using std::string, std::cout;

class Address
{
private:
    int itsNo;
    string itsStreetName;
    int itsPostalCode;
    string itsCity;

public:
    Address(int no,
            string streetName,
            int postalCode,
            string city);
    int getItsNo() const;
    const string &getItsStreetName() const;
    int getItsPostalCode() const;
    const string &getItsCity() const;

    void display();
};

#endif // ADDRESS_H
