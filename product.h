#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

using std::string;

class Product
{
private:
    int itsCode;
    string itsName;
    string itsBrand;
    double itsPrice;

public:
    Product(int code, string name, string brand, double price);

    int getItsCode() const;
    const string &getItsName() const;
    const string &getItsBrand() const;
    double getItsPrice() const;

};

#endif // PRODUCT_H
