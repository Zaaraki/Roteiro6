//
// Created by amaro on 30/03/2017.
//

#include "Restaurante.h"
#include <iostream>
#include <string>

using namespace std;

void Restaurante::adPedido(int mesa, int num, string desc, int qtd, float preco) {

    if(mesa>10){
        cout<<"Erro"<<endl;
    }
    else {
        m[mesa].adPedido(num, desc, qtd, preco);

    }
}

float Restaurante::calcTotalRes() {
    float total=0;
    for(int i=0; i<10; i++){
        total=total + m[i].calcTotal();
    }
    return total;
}