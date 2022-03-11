#ifndef ORDER_H
#define ORDER_H

#include <vector>

#include "address.h" // string already include here
#include "product.h"
#include "line.h"

using std::string, std::vector;

static int itsNbOrders = 0;

class Order
{
private:
    int itsNo = itsNbOrders;
    double itsPrice = for(int i=0; itsLine->size(); i++){itsLine[l]->getItsProduct->};
    string itsDate;
    vector <Line*> * itsLine;
    Address *itsDeliveryAddress;


public:
    Order(string date, Address *deliveryAdress);
    ~Order();

    int getItsNo() const;
    double getItsPrice() const;
    const string &getItsDate() const;

    void addLine(int quantity, Product *product);
    void removeLine(Product *product);
    void modifyLine(int quantity, Product *product);

};

#endif // ORDER_H
