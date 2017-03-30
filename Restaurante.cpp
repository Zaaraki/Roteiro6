//
// Created by amaro on 30/03/2017.
//

#include "Restaurante.h"
#include <iostream>
#include <string>

using namespace std;

void Restaurante::adPedido(int num, string desc, int qtd, float preco) {
    int i=0;
    if(i>10){
        cout<<"Erro"<<endl;
    }
    else {
        m[i].adPedido(num, desc, qtd, preco);
        i++;
    }
}

float Restaurante::calcTotalRes() {
    float total;
    for(int i=0; i<10; i++){
        total=total + m[i].calcTotal();
    }
    return total;
}