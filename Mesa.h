//
// Created by amaro on 30/03/2017.
//

#ifndef ROTEIRO6_MESA_H
#define ROTEIRO6_MESA_H

#include "Pedido.h"
using namespace std;

class Mesa{

private:
    Pedido p[10];


public:
    void adPedido(Pedido p[], int num, string desc, int qtd, float preco);
    void zeraPedido(Pedido p[]);
    float calcTotal(Pedido p[]);


};


#endif //ROTEIRO6_MESA_H
