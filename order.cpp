#include "order.h"


Order::Order(string date, Address *deliveryAdress):
    itsDate(date), itsDeliveryAddress(deliveryAdress)
{
    itsLine = new vector <Line*>();
}

Order::~Order()
{
    while (! itsLine->empty())
    {
        delete itsLine->back();
        itsLine->pop_back();
    }
    delete itsLine;
}

int Order::getItsNo() const
{return itsNo;}

double Order::getItsPrice() const
{return itsPrice;}

const string &Order::getItsDate() const
{return itsDate;}


void Order::addLine(int quantity, Product *product)
{
    itsLine->push_back(new Line(quantity, product));
    itsNbOrders++;
    itsPrice += product->getItsPrice()*quantity;
}

void Order::removeLine(Product *product)
{
    for (unsigned int i = 0; i < itsLine->size(); i++)
        if (itsLine->at(i)->getItsProduct() == product)
        {
            itsNbOrders--;
            itsPrice -= product->getItsPrice() * itsLine->at(i)->getItsQuantity();
            delete itsLine->at(i);
            itsLine->erase(itsLine->begin()+i);
            return;
        }
}

void Order::modifyLine(int quantity, Product *product)
{
    for (unsigned int i = 0; i < itsLine->size(); i++)
        if (itsLine->at(i)->getItsProduct() == product)
        {
            itsPrice -= product->getItsPrice()*quantity;
            itsLine->at(i)->setItsQuantity(quantity);
            itsPrice += product->getItsPrice()*quantity;
            return;
        }
}



