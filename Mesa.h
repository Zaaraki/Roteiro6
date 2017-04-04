//
// Created by amaro on 30/03/2017.
//

#ifndef ROTEIRO6_MESA_H
#define ROTEIRO6_MESA_H

#include "Pedido.h"
#include <vector>

using namespace std;

class Mesa{

private:
    vector<Pedido> pedidos;


public:
    void adPedido(Pedido pedido);
    void zeraPedido();
    float calcTotal();


};


#endif //ROTEIRO6_MESA_H
