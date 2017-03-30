//
// Created by amaro on 29/03/2017.
//

#include "Relogio.h"

#include <iostream>

using namespace std;

void Relogio::setHorario(int hora, int min, int seg){
    this->hora=hora;
    this->min=min;
    this->seg=seg;
}

void Relogio::avHorario() {
    avSeg();
}

void Relogio::avSeg() {
    if(seg < MAX_SEG-1){
        seg++;
    }

    else{
        seg=0;
        avMin();
    }
}

void Relogio::avMin() {
    if(min < MAX_MIN-1){
        min++;
    }
    else{
        min=0;
        avHora();
    }
}

void Relogio::avHora() {
    if(hora< MAX_HORA-1){
        hora++;
    }

    else {
        hora = 0;
        min=0;
        seg=0;
    }
}

void Relogio::setHora(int hora){
    Relogio::hora=hora;
}

void Relogio::setMin(int min){
    Relogio::min=min;
}

void Relogio::setSeg(int seg){
    Relogio::seg=seg;
}

int Relogio::getHora() const {
    return hora;
}

int Relogio::getMin() const {
    return min;
}

int Relogio::getSeg() const {
    return seg;
}

void Relogio::printHora(){
        cout << "Hora:" << getHora() << " Minuto: " << getMin() << " Segundos: " << getSeg() << endl;
};


