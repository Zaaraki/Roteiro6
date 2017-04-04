//
// Created by amaro on 30/03/2017.
//

#include "Pedido.h"
#include <string>

using namespace std;


Pedido::Pedido( int num, string desc, int qtd, float preco){
    this->num=num;
    this->desc=desc;
    this->qtd=qtd;
    this->preco=preco;
}

int Pedido::getNum() {
    return num;
}

int Pedido::getQtd() {
    return qtd;
}

float Pedido::getPreco() {
    return preco;
}
