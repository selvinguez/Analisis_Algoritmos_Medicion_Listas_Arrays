#pragma once
#ifndef LISTA_SIMPLE_H
#define LISTA_SIMPLE_H

#include "Nodo.h"
class ListaEnlazada {
private:
	Nodo* primero;

public:
	ListaEnlazada();

	void agregarElemento(int);
	void eliminar(int);
	int obtenerPorposicion(int);
	Nodo* obtenerPorposicion2(int);
	bool estaVacia();
	void imprimir();





};


#endif 