#ifndef LINE_H
#define LINE_H

#include "product.h"

class Line
{
private:
    int itsQuantity;
    Product *itsProduct;

public:
    Line(int quantity, Product* product);

    int getItsQuantity() const;
    void setItsQuantity(int newItsQuantity);

    Product *getItsProduct() const;
};

#endif // LINE_H
