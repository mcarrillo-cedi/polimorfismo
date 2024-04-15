#ifndef animales_h
#define animales_h
#include "clases.h"

#include <string>
using namespace std;

class Animal{
    public:
    string especie;

    Animal(string especie);

    virtual void saludar();
};

class Perro: public Animal{
    public:
    Perro();
    void saludar();
};

class Gato: public Animal{
    public:
    Gato();
    void saludar();
};

#endif