#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

using std::string;

class Address
{
private:
    int itsNo;
    string itsStreetName;
    int itsPostalCode;
    string itsCity;

public:
    Address(int no, string streetName, int postalCode, string city);
    int getItsNo() const;
    const string &getItsStreetName() const;
    int getItsPostalCode() const;
    const string &getItsCity() const;
};

#endif // ADDRESS_H
