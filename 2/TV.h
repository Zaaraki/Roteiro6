//
// Created by amaro on 29/03/2017.
//

#ifndef ROTEIRO6_TV_H
#define ROTEIRO6_TV_H

const int MAX_VOL=100;
const int MAX_CH=200;
const int MIN_VOL=0;
const int MIN_CH=0;

class TV {
private:
    int volume;
    int canal;

public:

    void setVC(int volume, int canal);
    void volUp();
    void  volDown();

    void chUp();
    void chDOwn();

    int getVol() const ;
    int getCh() const ;
    void setVol(int volume);
    void setCh(int canal);
};


#endif //ROTEIRO6_TV_H
