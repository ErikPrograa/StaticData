#ifndef STATICDATA_PERSONA_H
#define STATICDATA_PERSONA_H
#include <iostream>

class Persona {
public:
    Persona(){
        std::cout << "Persona creada" << std::endl;
    }
    ~Persona(){
        std::cout << "Persona destruida" << std::endl;
    }
};


#endif //STATICDATA_PERSONA_H
