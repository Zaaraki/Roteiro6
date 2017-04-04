//
// Created by amaro on 29/03/2017.
//

#include "Pedido.h"
#include "Mesa.h"
#include "Restaurante.h"
#include <iostream>

using namespace std;

int main(){
    //Criando restaurante
    Restaurante r;

    //Criando as mesas
    Mesa m1;
    Mesa m2;

    //Adicionando as mesas no restaurante
    r.adMesa(m1);
    r.adMesa(m2);

    cout << "Adicionando pedidos"<<endl;

    Pedido p1 (1, "Item 1", 1, 100.f);
    Pedido p2 (2, "Item 2", 5, 400.f);
    Pedido p3 (3, "Item 3", 2, 30.f);
    Pedido p4 (4, "Item 4", 9, 20.f);

    cout << "Adicionando pedidos na mesa 1"<<endl;

    r.adPedido(0, p1);
    r.adPedido(0, p2);

    cout << "Adicionando pedidos na mesa 2"<<endl;

    r.adPedido(1, p3);
    r.adPedido(1, p4);

    cout<<"Total de vendas do restaurante: "<< r.calcTotalRes() << endl;

    cout<< "Total da mesa 1: " << m1.calcTotal() << endl;
    cout<< "Total da mesa 2: " << m2.calcTotal() << endl;

    cout << "Limpar pedidos da mesa 1"<<endl;
    r.limpaMesa(0);

    cout << "Limpar pedidos da mesa 2"<<endl;
    r.limpaMesa(1);

    cout<< "Total da mesa 1: " << m1.calcTotal() << endl;
    cout<< "Total da mesa 2: " << m2.calcTotal() << endl;



    return 0;
}