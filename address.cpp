// TP4/EX1/address.cpp
// Exercice 1 : Site de vente
// BODIN Maxime C2
// 22/10/03

#include "address.h"

Address::Address(int no,
                 string streetName,
                 int postalCode,
                 string city)
    :
    itsNo(no),
    itsStreetName(streetName),
    itsPostalCode(postalCode),
    itsCity(city)
{}


int Address::getItsNo() const
{return itsNo;}

const string &Address::getItsStreetName() const
{return itsStreetName;}

int Address::getItsPostalCode() const
{return itsPostalCode;}

const string &Address::getItsCity() const
{return itsCity;}

void Address::display()
{
    cout << getItsNo()<< ", "
         << getItsStreetName() << ", "
         << getItsCity() << ", "
         << getItsPostalCode();
}

