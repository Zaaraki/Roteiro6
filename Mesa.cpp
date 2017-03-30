//
// Created by amaro on 30/03/2017.
//

#include "Mesa.h"
#include <iostream>
#include <string>

using namespace std;

void Mesa::adPedido(Pedido *p, int num, string desc, int qtd, float preco) {
    int i=0;
    if(i>10){
        cout<<"Erro"<<endl;
    }
    else {
        p[i].setPedido(num, desc, qtd, preco);
        i++;
    }
}

void Mesa::zeraPedido(Pedido *p) {
    for (int i = 0; i < 10; ++i) {
        p[i].setPedido(0, "null", 0, 0);
    }
}

float Mesa::calcTotal(Pedido *p) {
    int total=0;
    for (int i = 0; i < 10; ++i) {
        total=total+p->getPreco();
    }

    return total;
}