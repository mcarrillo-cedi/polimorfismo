#include "animales.h"
void saludo (Animal &anim);
int main(){
    Animal animal("Pulpo");
    Perro perro;
    Gato gato;

    saludo(animal);
    saludo(perro);
    saludo(gato);
    return 0;
}

void saludo(Animal &anim){
    anim.saludar();
}