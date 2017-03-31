//
// Created by amaro on 29/03/2017.
//

#include "Pedido.h"
#include "Mesa.h"
#include "Restaurante.h"
#include <iostream>

using namespace std;

int main(){
    Restaurante r;
    Mesa m[10];
    Pedido p;

    int numMesa;

    cout << "Adicionando um pedido"<<endl;
    r.adPedido(1, 1, "Suco", 2, 20);

    numMesa=2;
    m[numMesa].adPedido(3, "Comida", 1, 30);

    numMesa=3;
    m[numMesa].adPedido(5, "Comida", 3, 50);

    cout << "Total da mesa: ";
    m[3].calcTotal();
    cout << endl;

    cout << "Total do restaurante: ";
    r.calcTotalRes();
    cout << endl;



    return 0;
}