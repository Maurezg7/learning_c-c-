#include <stdio.h>

typedef struct Lenguaje
{
    char *Nombre;
    short year;
} Lenguaje;


void description(Lenguaje lenguaje){
    printf("Lenguaje: %s\nAño de creacion: %u\n", lenguaje.Nombre, lenguaje.year);
    printf("////////////////////////////////////////////\n");
}
