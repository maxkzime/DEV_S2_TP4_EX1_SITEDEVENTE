// TP4/EX1/main.cpp
// Exercice 1 : Site de vente
// BODIN Maxime C2
// 22/10/03

#include <iostream>
#include <string>

#include "client.h"

int main()
{
    cout << "BODIN Maxime C2" << "\n\n";

    cout << "\n(a) crée une instance de Client.\n";
    Address * paulAddress = new Address(12,"Mimosas",65220,"Montpellier");
    Client * paul = new Client("Paul", "Bertrand", paulAddress);

    cout << "\n(b) crée une instance de Commande.\n";
    Order * paulFirstOrder = new Order("12.02.2003", paulAddress);

    cout << "\n(c) ajoute 2 bouteilles d’eau de source d’Evian à la commande.\n";
    Product * evianBottle = new Product(1,"Bouteille d'eau de source","Evian",2.50);
    paulFirstOrder->addLine(2,evianBottle);

    cout << "\n(d) ajoute 1 paquet de mouchoirs de la marque U à la commande et l’affiche.\n";
    Product * uTissue = new Product(2,"Paquet de Mouchoirs", "U", 3.0);
    paulFirstOrder->addLine(1,uTissue);
    paulFirstOrder->display();

    cout << "\n(e) ajoute 1 bouteille d’eau de source d’Evian à la commande et l’affiche.\n";
    paulFirstOrder->addLine(1,evianBottle);
    paulFirstOrder->display();

    cout << "\n(f) supprime les mouchoirs de la commande et l’affiche.\n";
    paulFirstOrder->removeLine(uTissue);
    paulFirstOrder->display();

    cout << "\n(g) ajoute la commande au client et affiche le client ainsi que ses commandes.\n";
    paul->addOrder(paulFirstOrder);
    paul->display();

    cout << "\n(h) modifie la quantité des bouteille d’eau de source d’Evian (2 bouteilles) et affiche la commande.\n";
    paulFirstOrder->modifyLine(2,evianBottle);
    paulFirstOrder->display();

    cout << "\n(i) modifie la quantité des bouteille d’eau de source d’Evian (1 bouteilles) et affiche la commande.\n";
    paulFirstOrder->modifyLine(1,evianBottle);
    paulFirstOrder->display();

    cout << "\n(j) ajoute 2 paquets de mouchoirs de la marque U à la commande et l’affiche.\n";
    paulFirstOrder->addLine(2,uTissue);
    paulFirstOrder->display();

    cout << "\n(k) modifie la quantité des bouteille d’eau de source d’Evian (0 bouteilles) et affiche la commande.\n";
    paulFirstOrder->modifyLine(0,evianBottle);
    paulFirstOrder->display();

    cout << "\n(l) crée une deuxième instance de Commande.\n";
    Order * paulSecondOrder = new Order("12.02.2015", paulAddress);

    cout << "\n(m) ajoute 1 bouteille d’eau de source d’Evian à la deuxième commande.\n";
    paulSecondOrder->addLine(1,evianBottle);

    cout << "\n(n) ajoute 1 paquet de mouchoirs de la marque U à la deuxième commande.\n";
    paulSecondOrder->addLine(1,uTissue);

    cout << "\n(o) ajoute la deuxième commande au client et affiche le client ainsi que ses commandes.\n";
    paul->addOrder(paulSecondOrder);
    paul->display();

    return 0;
}
