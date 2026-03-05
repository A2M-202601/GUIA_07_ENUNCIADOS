#include "abb.h"
#include <stddef.h>
#include <stdlib.h>
#include "abb_estructura_privada.h"


abb_t* abb_crear(abb_comparador comparador){
  // Tu código
}

abb_t* abb_insertar(abb_t* arbol, void* elemento){
  // Tu código
}

void* abb_quitar(abb_t* arbol, void *elemento){
  // Tu código
}

void* abb_buscar(abb_t* arbol, void* elemento){
  // Tu código
}

bool abb_vacio(abb_t* arbol){
  // Tu código
}

size_t abb_tamanio(abb_t *arbol){
  // Tu código
}

void abb_destruir(abb_t *arbol){
  // Tu código
}


void abb_destruir_todo(abb_t *arbol, void (*destructor)(void *)){
  // Tu código
}

size_t abb_con_cada_elemento(abb_t *arbol, abb_recorrido recorrido, bool (*funcion)(void *, void *), void *aux){
  // Tu código
}

size_t abb_recorrer(abb_t* arbol, abb_recorrido recorrido, void** array, size_t tamanio_array){
  // Tu código
}