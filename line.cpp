// TP4/EX1/line.cpp
// Exercice 1 : Site de vente
// BODIN Maxime C2
// 22/10/03

#include "line.h"

Line::Line(int quantity,
           Product *product)
    :
      itsQuantity(quantity),
      itsProduct(product)
{}


int Line::getItsQuantity() const
{return itsQuantity;}

void Line::setItsQuantity(int newItsQuantity)
{itsQuantity = newItsQuantity;}


Product *Line::getItsProduct() const
{return itsProduct;}

void Line::display()
{
    cout << "\nQuantité: " << getItsQuantity() << " -> ";
    getItsProduct()->display();
}




