//
// Created by amaro on 30/03/2017.
//

#include "Restaurante.h"
#include <iostream>
#include <string>

using namespace std;

void Restaurante::adMesa(Mesa mesa) {
    mesas.push_back(mesa);
}

void Restaurante::adPedido(int numMesa, Pedido pedido) {

    if(numMesa<mesas.size()){
        mesas.at(numMesa).adPedido(pedido);
        cout << "Item "<< pedido.getNum() << " adicionado na mesa " << numMesa + 1 << endl;
    }
}

double Restaurante::calcTotalRes() {
    double total=0;

//    for(auto &m : mesas){
//        total+= m.calcTotal();
//    }
    for(int i=0; i<mesas.size(); i++){
        total+=mesas[i].calcTotal();
    }
    return total;
}

void Restaurante::limpaMesa(int index) {
    if(index > mesas.size()){
        return;
    }
    mesas.at(index).zeraPedido();
}