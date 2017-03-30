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
    void adPedido(int num, string desc, int qtd, float preco);
    void zeraPedido();
    float calcTotal();


};


#endif //ROTEIRO6_MESA_H
