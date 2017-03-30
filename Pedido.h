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

    void setPedido(int num, string desc, int qtd, float preco);

    int getNum();
    string getDesc();
    int getQtd();
    float getPreco();

    void setNum(int num);
    void setDesc(string desc);
    void setQtd(int qtd);
    void setPreco(float preco);
};


#endif //ROTEIRO6_PEDIDO_H
