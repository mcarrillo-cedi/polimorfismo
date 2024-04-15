#include "clases.h"
#include "animales.h"
#include <iostream>
using namespace std;

Animal::Animal(string especie){
    this->especie = especie;
}

void Animal::saludar(){
    cout << "Hola, que tal?"<< endl;
}

Perro::Perro():Animal("Perro"){}

Gato::Gato():Animal("Gato"){}

void Perro::saludar(){
    cout << "Woof" << endl;
}

void Gato::saludar(){
    cout << "Miau" << endl;
}