//
// Created by amaro on 29/03/2017.
//

#include <iostream>
#include <stdlib.h>
#include "TV.h"
using namespace std;

int main(){

    TV tv;

    tv.setVC(50,50);

    cout << "Volume atual: " << tv.getVol()<<endl;
    cout << "Canal atual: " << tv.getCh()<<endl;

    cout << "Aumentando o volume 10 vezes" << endl;
    for(int i=0; i<10; i++){
        tv.volUp();
    }

    cout << "Volume atual: " << tv.getVol()<<endl;

    cout << "Diminuindo o volume 5 vezes" << endl;
    for(int i=0; i<5; i++){
        tv.volDown();
    }

    cout << "Volume atual: " << tv.getVol()<<endl;

    cout << "Aumentando o canal 5 vezes" << endl;
    for(int i=0; i<5; i++){
        tv.chUp();
    }

    cout << "Canal atual: " << tv.getCh()<<endl;

    cout << "Diminuindo o canal 2 vezes" << endl;
    for(int i=0; i<2; i++){
        tv.chDOwn();
    }

    cout << "Canal atual: " << tv.getCh()<<endl;

    cout << "Escolhendo um canal arbitrario, como o canal 10" << endl;
    tv.setCh(10);
    cout << "Canal atual: " << tv.getCh()<<endl;
    cout << endl;
    cout << endl;
    
    cout << "Volume atual: " << tv.getVol()<<endl;
    cout << "Canal atual: " << tv.getCh()<<endl;



    return 0;
}