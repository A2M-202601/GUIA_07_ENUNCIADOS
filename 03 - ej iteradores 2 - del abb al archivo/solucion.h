#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "abb.h"

typedef struct pokemon{
    char* nombre;
    int nivel;
    int fuerza;
    int inteligencia;
    int carisma;
}pokemon_t;

void escribir_pokemones_en_archivo(abb_t* pokemones, FILE* archivo);