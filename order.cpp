#include "order.h"


Order::Order(std::string date, Address *deliveryAdress):
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
}

void Order::removeLine(Product *product)
{
    for (unsigned int i = 0; i < itsLine->size(); i++)
        if (itsLine->at(i)->getItsProduct() == product)
        {
            delete itsLine->at(i);
            itsLine->erase(itsLine->begin()+i);
            itsNbOrders--;
            return;

        }
}

void Order::modifyLine(int quantity, Product *product)
{
    for (unsigned int i = 0; i < itsLine->size(); i++)
        if (itsLine->at(i)->getItsProduct() == product)
        {
            itsLine->at(i)->setItsQuantity(quantity);
            return;
        }
}



