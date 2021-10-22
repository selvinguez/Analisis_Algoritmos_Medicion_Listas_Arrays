#include "ListaSimple.h"
#include <iostream>
using namespace std;

ListaEnlazada::ListaEnlazada() :primero(nullptr)
{};

bool ListaEnlazada::estaVacia() {
	return primero == nullptr;
};

int ListaEnlazada::obtenerPorposicion(int numero) {
	if (numero == 0) {
		return primero->getValor();
	}
	else {
		Nodo* actual = primero;
		for (int i = 0; i < numero; i++) {
			if (actual->getSiguiente() != nullptr) {
				actual = actual->getSiguiente();
			}
		}
		
			return actual->getValor();
		
		}
	
    

 };

Nodo* ListaEnlazada::obtenerPorposicion2(int numero) {
	if (numero == 0) {
		return primero;
	}
	else {
		Nodo* actual = primero;
		for (int i = 0; i < numero; i++) {
			actual = actual->getSiguiente();
		}
		return actual;
	}

};

void ListaEnlazada::agregarElemento(int _valor) {
	Nodo* nuevo = new Nodo(_valor, nullptr,nullptr);

	if (estaVacia())
		primero = nuevo;
	else {
		Nodo* actual = primero;

		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}

		actual->setSiguiente(nuevo);
	}

}

void ListaEnlazada::imprimir() {
	if (estaVacia())
		cout << "Lista Vacia!";
	else {
		Nodo* actual = primero;
		while (actual != nullptr) {
			cout << "[" << actual->getValor() << "]";
			actual = actual->getSiguiente();
		}

	}

}

void ListaEnlazada::eliminar(int _valor) {
	if (estaVacia())
		cout << "\nLista Vacia\n";
	else {
		Nodo* actual = primero;
		Nodo* anterior = nullptr;

		while (actual != nullptr) {

			if (actual->getValor() == _valor) {
				if (actual == primero) {
					Nodo* copiaP = primero;
					primero = primero->getSiguiente();
					delete copiaP;
				}
				else {
					anterior->setSiguiente(actual->getSiguiente());
					delete actual;
				}
				return;
			}
			anterior = actual;
			actual = actual->getSiguiente();
		}




	}


};