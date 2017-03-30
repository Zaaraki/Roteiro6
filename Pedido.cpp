//
// Created by amaro on 30/03/2017.
//

#include "Pedido.h"
#include <string>

using namespace std;

void Pedido::setPedido(int num, string desc, int qtd, float preco) {
    this->num=num;
    this->desc=desc;
    this->qtd=qtd;
    this->preco=preco;
}

void Pedido::setNum(int num){
    Pedido::num=num;
}

void Pedido::setDesc(string desc) {
    Pedido::desc=desc;
}

void Pedido::setQtd(int qtd) {
    Pedido::qtd=qtd;
}

void Pedido::setPreco(float preco) {
    Pedido::preco=preco;
}

int Pedido::getNum() {
    return num;
}

string Pedido::getDesc() {
    return desc;
}

int Pedido::getQtd() {
    return qtd;
}

float Pedido::getPreco() {
    return preco;
}
