#include "ListaSimple.h"
#include "Sort.h"
#include <conio.h>
#include<iostream>
#include "Stopwatch.h"
using namespace win32;
using namespace std;
int main() {

	//BubbleSort
     cout << "Bubble Sort\n";
	//Declaracion de los cronometros
	Stopwatch cronometroListaBubble;
	Stopwatch cronometroArrayBubble;
	//Relleno de las listas y array bubble sort
	ListaEnlazada listaBubble;
	listaBubble.agregarElemento(1);
	listaBubble.agregarElemento(5);
	listaBubble.agregarElemento(3);
	listaBubble.agregarElemento(6);
	listaBubble.agregarElemento(4);
	int arrayBubble[5] = { 4,5,3,6,1};
	cout << "\n";
	for (int i = 0; i < 5; i++) {
		cout << arrayBubble[i];
	}
	cronometroArrayBubble.Start();
	Sort::BubbleSort(arrayBubble, 5);
	cronometroArrayBubble.Stop();
	cout << "\n";
	for (int i = 0; i < 5; i++) {
		cout << arrayBubble[i] ;
	}
	cout << "\nEl Ordenamiento Bubble Sort en array tardo: " << cronometroArrayBubble.ElapsedMilliseconds() << " MilliSegundos";
	cout << "\n";
	listaBubble.imprimir();
	cout << "\n";
	cronometroListaBubble.Start();
	Sort::BubbleSortList(listaBubble, 5);
	cronometroListaBubble.Stop();
	listaBubble.imprimir();
	cout << "\nEl ordenamiento Bubble Sort en lista tardo: " << cronometroListaBubble.ElapsedMilliseconds() << " MilliSegundos";
	cout << "\n";
	cout << "\n";
	cout << "\n";


	//Selection Sort
	cout << "Selection Sort\n";
	//Declaracion de los cronometros
	Stopwatch cronometroListaSelection;
	Stopwatch cronometroArraySelection;
	//Relleno de las listas y array bubble sort
	ListaEnlazada listaSelection;
	listaSelection.agregarElemento(1);
	listaSelection.agregarElemento(5);
	listaSelection.agregarElemento(3);
	listaSelection.agregarElemento(6);
	listaSelection.agregarElemento(4);
	int arraySelection[5] = { 4,5,3,6,1 };
	cout << "\n";
	for (int i = 0; i < 5; i++) {
		cout << arraySelection[i];
	}
	cronometroArraySelection.Start();
	Sort::SelectionSort(arraySelection, 5);
	cronometroArraySelection.Stop();
	cout << "\n";
	for (int i = 0; i < 5; i++) {
		cout << arraySelection[i];
	}
	cout << "\nEl Ordenamiento Selection Sort en array tardo: " << cronometroArraySelection.ElapsedMilliseconds() << " MilliSegundos";
	cout << "\n";
	listaSelection.imprimir();
	cout << "\n";
	cronometroListaSelection.Start();
	Sort::SelectionSortList(listaSelection, 5);
	cronometroListaSelection.Stop();
	listaBubble.imprimir();
	cout << "\nEl ordenamiento Selection Sort en lista tardo: " << cronometroListaSelection.ElapsedMilliseconds() << " MilliSegundos";
	cout << "\n";
	cout << "\n";
	cout << "\n";


	//Insertion Sort
	cout << "Insertion Sort\n";
	//Declaracion de los cronometros
	Stopwatch cronometroListaInsertion;
	Stopwatch cronometroArrayInsertion;
	//Relleno de las listas y array bubble sort
	ListaEnlazada listaInsertion;
	listaInsertion.agregarElemento(1);
	listaInsertion.agregarElemento(5);
	listaInsertion.agregarElemento(3);
	listaInsertion.agregarElemento(6);
	listaInsertion.agregarElemento(4);
	int arrayInsertion[5] = { 4,5,3,6,1 };
	cout << "\n";
	for (int i = 0; i < 5; i++) {
		cout << arrayInsertion[i];
	}
	cronometroArrayInsertion.Start();
	Sort::insertionSort(arrayInsertion, 5);
	cronometroArrayInsertion.Stop();
	cout << "\n";
	for (int i = 0; i < 5; i++) {
		cout << arrayInsertion[i];
	}
	cout << "\nEl Ordenamiento Insertion Sort en array tardo: " << cronometroArrayInsertion.ElapsedMilliseconds() << " MilliSegundos";
	cout << "\n";
	
	listaInsertion.imprimir();
	cout << "\n";
	cronometroListaInsertion.Start();
	Sort::insertionSortList(listaInsertion, 5);
	cronometroListaInsertion.Stop();
	listaInsertion.imprimir();
	cout << "\nEl ordenamiento Insertion Sort en lista tardo: " << cronometroListaInsertion.ElapsedMilliseconds() << " MilliSegundos";
	cout << "\n";
	cout << "\n";
	cout << "\n";



	//Shell Sort
	cout << "Shell Sort\n";
	//Declaracion de los cronometros
	Stopwatch cronometroListaShell;
	Stopwatch cronometroArrayShell;
	//Relleno de las listas y array bubble sort
	ListaEnlazada listaShell;
	listaShell.agregarElemento(1);
	listaShell.agregarElemento(5);
	listaShell.agregarElemento(3);
	listaShell.agregarElemento(6);
	listaShell.agregarElemento(4);
	int arrayShell[5] = { 4,5,3,6,1 };
	cout << "\n";
	for (int i = 0; i < 5; i++) {
		cout << arrayShell[i];
	}
	cronometroArrayShell.Start();
	Sort::shellSort(arrayShell, 5);
	cronometroArrayShell.Stop();
	cout << "\n";
	for (int i = 0; i < 5; i++) {
		cout << arrayShell[i];
	}
	cout << "\nEl Ordenamiento Shell Sort en array tardo: " << cronometroArrayShell.ElapsedMilliseconds() << " MilliSegundos";
	cout << "\n";
	
	listaShell.imprimir();
	cout << "\n";
	cronometroListaShell.Start();
	Sort::shellSortList(listaShell, 5);
	cronometroListaShell.Stop();
	listaShell.imprimir();
	cout << "\nEl ordenamiento Shell Sort en lista tardo: " << cronometroListaShell.ElapsedMilliseconds() << " MilliSegundos";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	

	
	
	_getch();
}