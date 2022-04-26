// TP4/EX1/product.h
// Exercice 1 : Site de vente
// BODIN Maxime C2
// 22/10/03

#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>

using std::string, std::cout;

class Product
{
private:
    int itsCode;
    string itsName;
    string itsBrand;
    double itsPrice;

public:
    Product(int code,
            string name,
            string brand,
            double price);

    int getItsCode() const;
    const string &getItsName() const;
    const string &getItsBrand() const;
    double getItsPrice() const;


    void display();

};

#endif // PRODUCT_H
