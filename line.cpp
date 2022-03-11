#include "line.h"

Line::Line(int quantity, Product *product):
    itsQuantity(quantity), itsProduct(product)
{}


int Line::getItsQuantity() const
{return itsQuantity;}

void Line::setItsQuantity(int newItsQuantity)
{itsQuantity = newItsQuantity;}


Product *Line::getItsProduct() const
{return itsProduct;}




