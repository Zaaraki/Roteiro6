 //
// Created by amaro on 30/03/2017.
//

#include "Mesa.h"
#include <iostream>
#include <string>

using namespace std;

void Mesa::adPedido(Pedido pedido) {
	pedidos.push_back(pedido);
    
}

void Mesa::zeraPedido() {
    pedidos.clear();
}

float Mesa::calcTotal() {
    float total=0;
//    for(auto &o : pedidos)
//    	total+= o.getPreco() * o.getQtd();
    for(int i=0; i<pedidos.size(); i++){
        total+= pedidos[i].getQtd() * pedidos[i].getPreco();
    }
    return total;
}
