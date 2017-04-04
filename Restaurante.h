//
// Created by amaro on 30/03/2017.
//

#ifndef ROTEIRO6_RESTAURANTE_H
#define ROTEIRO6_RESTAURANTE_H

#include "Mesa.h"
using namespace std;

class Restaurante {
private:
    vector<Mesa> mesas;
public:
    void adMesa(Mesa mesa);
    void adPedido(int numMesa, Pedido pedido);
    double calcTotalRes();
    void limpaMesa(int index);

};


#endif //ROTEIRO6_RESTAURANTE_H
