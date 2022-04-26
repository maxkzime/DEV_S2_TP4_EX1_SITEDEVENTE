// TP4/EX1/product.h
// Exercice 1 : Site de vente
// BODIN Maxime C2
// 22/10/03

#include "product.h"

Product::Product(int code,
                 std::string name,
                 std::string brand,
                 double price)
    :
      itsCode(code),
      itsName(name),
      itsBrand(brand),
      itsPrice(price)
{}

int Product::getItsCode() const
{return itsCode;}

const string &Product::getItsName() const
{return itsName;}

const string &Product::getItsBrand() const
{return itsBrand;}

double Product::getItsPrice() const
{return itsPrice;}

void Product::display()
{
    cout << "Code : "   << getItsCode() << " #"
         << "Brand : " << getItsBrand() << " #"
         << "Name : " << getItsName() << " #"
         << "Price : " << getItsPrice() << "€ #\n";
}
