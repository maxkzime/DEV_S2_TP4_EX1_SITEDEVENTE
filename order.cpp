// TP4/EX1/order.cpp
// Exercice 1 : Site de vente
// BODIN Maxime C2
// 22/10/03

#include "order.h"



Order::Order(string date,
             Address *deliveryAdress)
    :
      itsDate(date),
      itsLine(new vector <Line*>()),
      itsDeliveryAddress(deliveryAdress)
{itsNbOrders++;}

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

double Order::getItsPrice()
{
    //    for(Line * tempPtr : *itsLine)
    //        itsPrice += tempPtr->getItsQuantity() * tempPtr->getItsProduct()->getItsPrice();
    return itsPrice;
}

const string &Order::getItsDate() const
{return itsDate;}


void Order::addLine(int quantity, Product *product)
{
    bool alreadyExists = false;
    for (unsigned int i = 0; i < itsLine->size(); i++)
        if (itsLine->at(i)->getItsProduct() == product)
        {
            alreadyExists = true;
            itsPrice += product->getItsPrice()*quantity;
            int currQuantity = itsLine->at(i)->getItsQuantity();
            itsLine->at(i)->setItsQuantity(currQuantity+quantity);
        }

    if(!alreadyExists){
        itsLine->push_back(new Line(quantity, product));
        itsPrice += product->getItsPrice()*quantity;
    }
}

void Order::removeLine(Product *product)
{
    for (unsigned int i = 0; i < itsLine->size(); i++)
        if (itsLine->at(i)->getItsProduct() == product)
        {
            itsPrice -= product->getItsPrice() * itsLine->at(i)->getItsQuantity();
            delete itsLine->at(i);
            itsLine->erase(itsLine->begin()+i);

            /*if(itsLine->at(i)->getItsQuantity() == 0){
            }*/
            break;
        }
}

void Order::modifyLine(int quantity, Product *product)
{
    for (unsigned int i = 0; i < itsLine->size(); i++)
        if (itsLine->at(i)->getItsProduct() == product)
        {
            itsPrice -= product->getItsPrice()*quantity;
            itsLine->at(i)->setItsQuantity(quantity);
            break;
        }
}


vector<Line *> *Order::getItsLine() const
{return itsLine;}

void Order::display()
{
    cout << "\n--==--===--==--\n";
    cout << "No : "     << getItsNo()       << '\n';
    cout << "Price : "  << getItsPrice()    << "€ \n";
    cout << "Date : "   << getItsDate()     << '\n';

    for(Line * templines : *getItsLine()){
        templines->display();
    }

    cout << "--==--===--==--\n";
}
