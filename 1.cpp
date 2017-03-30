#include <iostream>
#include <stdlib.h>
#include "Relogio.h"

using namespace std;

int main() {

    Relogio c1;
    c1.setHorario(9, 3, 59);
    c1.printHora();

    int diaSecs = MAX_SEG * MAX_MIN * MAX_HORA;


    for(int i = 0; i< 2; i++) {
        c1.avHorario();
    }

    // this horary must be the same as the first output
    cout << "Segundo horario depois de 24h ";
    c1.printHora();


    return 0;
}
