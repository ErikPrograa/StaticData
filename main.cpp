#include <iostream>
#include "Persona.h"

int main() {

    //stack
    int a = 1;
    int b = 2;
    int c = 3;

    //heap
    int *d = new int(4);
    int *e = new int(5);
    int *f = new int(6);

    delete d;
    delete e;
    delete f;

    //stack
    Persona g;

    //heap
    Persona *h = new Persona;
    delete h;
}
