//
// Created by amaro on 30/03/2017.
//

#ifndef ROTEIRO6_RESTAURANTE_H
#define ROTEIRO6_RESTAURANTE_H

#include "Mesa.h"
using namespace std;

class Restaurante {
private:
    Mesa m[10];
public:
    void adPedido(Mesa m[]);
    void calcTotalRes();

};


#endif //ROTEIRO6_RESTAURANTE_H