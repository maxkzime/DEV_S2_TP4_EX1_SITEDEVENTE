// TP4/EX1/order.h
// Exercice 1 : Site de vente
// BODIN Maxime C2
// 22/10/03

#ifndef ORDER_H
#define ORDER_H

#include <vector>

#include "address.h" // string already include here
#include "product.h"
#include "line.h"

using std::vector;

static int itsNbOrders = 0;

class Order
{
private:
    int itsNo = itsNbOrders;
    double itsPrice;
    string itsDate;
    vector <Line*> * itsLine;
    Address *itsDeliveryAddress;


public:
    Order(string date,
          Address *deliveryAdress);
    ~Order();

    int getItsNo() const;
    double getItsPrice();
    const string &getItsDate() const;

    void addLine(int quantity, Product *product);
    void removeLine(Product *product);
    void modifyLine(int quantity, Product *product);

    vector<Line *> *getItsLine() const;

    void display();
};

#endif // ORDER_H
