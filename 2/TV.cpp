//
// Created by amaro on 29/03/2017.
//

#include "TV.h"
#include <iostream>

using namespace std;

void TV::setVC(int volume, int canal) {
    this->volume=volume;
    this->canal=canal;
}

void TV::volUp() {
    if(volume<MAX_VOL){
        volume++;
    }

    else{
        volume--;
    }
}

void TV::volDown() {
    if(volume>MIN_VOL){
        volume--;
    }
    else
        volume++;
}

void TV::chUp() {
    if(canal<MAX_CH){
        canal++;
    }
    else
        canal--;
}

void TV::chDOwn() {
    if(canal>MIN_CH){
        canal--;
    }
    else
        canal++;
}

int TV::getVol() const {
    return volume;
}
int TV::getCh() const {
    return canal;
}

void TV::setVol(int volume) {
    TV::volume=volume;
}

void TV::setCh(int canal) {
    TV::canal=canal;
}
