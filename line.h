// TP4/EX1/line.h
// Exercice 1 : Site de vente
// BODIN Maxime C2
// 22/10/03

#ifndef LINE_H
#define LINE_H

#include "product.h"

class Line
{
private:
    int itsQuantity;
    Product *itsProduct;

public:
    Line(int quantity,
         Product* product);

    int getItsQuantity() const;
    void setItsQuantity(int newItsQuantity);

    Product *getItsProduct() const;

    void display();
};

#endif // LINE_H
