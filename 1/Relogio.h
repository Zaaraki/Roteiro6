//
// Created by amaro on 29/03/2017.
//

#ifndef ROTEIRO6_RELOGIO_H
#define ROTEIRO6_RELOGIO_H

const int MAX_SEG=60;
const int MAX_MIN=60;
const int MAX_HORA=24;

class Relogio {
private:
    int hora;
    int min;
    int seg;

    void avSeg();
    void avMin();
    void avHora();

public:

    void setHorario(int hora, int min, int seg);

    void avHorario();

    int getHora() const;
    int getMin() const;
    int getSeg() const;

    void setHora(int hora);
    void setMin(int min);
    void setSeg(int seg);

    void printHora();


};


#endif //ROTEIRO6_RELOGIO_H
