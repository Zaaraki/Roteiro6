//
// Created by amaro on 30/03/2017.
//

#ifndef ROTEIRO6_PEDIDO_H
#define ROTEIRO6_PEDIDO_H
#include <string>
using namespace std;

class Pedido {
private:
    int num;
    string desc;
    int qtd;
    float preco;

public:

    Pedido(int num, string desc, int qtd, float preco);

    
    int getNum();
    int getQtd();
    float getPreco();

};


#endif //ROTEIRO6_PEDIDO_H
