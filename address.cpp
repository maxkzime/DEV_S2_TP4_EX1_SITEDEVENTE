#include "address.h"

Address::Address(int no, string streetName, int postalCode, string city):
    itsNo(no), itsStreetName(streetName), itsPostalCode(postalCode), itsCity(city)
{}


int Address::getItsNo() const
{return itsNo;}

const string &Address::getItsStreetName() const
{return itsStreetName;}

int Address::getItsPostalCode() const
{return itsPostalCode;}

const string &Address::getItsCity() const
{return itsCity;}

