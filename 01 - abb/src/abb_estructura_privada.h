#ifndef ABB_ESTRUCTURA_PRIVADA_H_
#define ABB_ESTRUCTURA_PRIVADA_H_

#include <stdlib.h>
#include "abb.h"

//ESTE ARCHIVO NO ES PARA EL USUARIO
//
// Normalmente se definiría en el .c, pero lo incluimos acá para poder testearlo en las pruebas

typedef struct nodo_abb {
	void *elemento;
	struct nodo_abb *izquierda;
	struct nodo_abb *derecha;
} nodo_abb_t;

struct abb {
	size_t tamanio;
	nodo_abb_t *nodo_raiz;
	abb_comparador comparador;
};

#endif // ABB_ESTRUCTURA_PRIVADA_H_