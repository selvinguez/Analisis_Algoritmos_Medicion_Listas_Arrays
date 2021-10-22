#include "Sort.h"
#include <iostream>
#include <amp.h>
using namespace std;

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}


void swapNodo(Nodo* xp, Nodo* yp)
{
	Nodo temp = *xp;
	xp->setValor(yp->getValor());
	yp->setValor(temp.getValor());
}

void Sort::BubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		// Last i elements are already in place
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}
void Sort::BubbleSortList(ListaEnlazada lis, int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		// Last i elements are already in place
		for (j = 0; j < n - i - 1; j++)
			if (lis.obtenerPorposicion(j) > lis.obtenerPorposicion(j + 1))
				swapNodo(lis.obtenerPorposicion2(j), lis.obtenerPorposicion2(j + 1));
}


void Sort::SelectionSort(int arreglo[], const int tamanio)
{
	int minimo; //almacena el subíndice del valor minimo
	for (int i = 0; i < tamanio; i++)//recorre todo el arreglo desde la posición inicial hasta el final
	{
		minimo = i; //se asume que el subíndice del valor mínimo es el primer valor
		for (int j = i + 1; j < tamanio; j++)//recorre el arreglo desde una posición siguiente al inicio
		{
			if (arreglo[j] < arreglo[minimo])
				minimo = j; //el minimo subíndice es j

			swap(&arreglo[i], &arreglo[minimo]); //intercambio de valores del arreglo

		}
	}

}

void Sort::SelectionSortList(ListaEnlazada lis, int tamanio)
{
	int minimo; //almacena el subíndice del valor minimo
	for (int i = 0; i < tamanio; i++)//recorre todo el arreglo desde la posición inicial hasta el final
	{
		minimo = i; //se asume que el subíndice del valor mínimo es el primer valor
		for (int j = i + 1; j < tamanio; j++)//recorre el arreglo desde una posición siguiente al inicio
		{
			if (lis.obtenerPorposicion(j) < lis.obtenerPorposicion(minimo))
				minimo = j; //el minimo subíndice es j

			swapNodo(lis.obtenerPorposicion2(i), lis.obtenerPorposicion2(minimo)); //intercambio de valores del arreglo

		}
	}

}

void Sort::insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void Sort::insertionSortList(ListaEnlazada lis, int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = lis.obtenerPorposicion(i);
		j = i - 1;

		while (j >= 0 && lis.obtenerPorposicion(j) > key)
		{
			lis.obtenerPorposicion2(j + 1)->setValor(lis.obtenerPorposicion(j));
			j = j - 1;
		}
		lis.obtenerPorposicion2(j + 1)->setValor(key);
	}
}

void Sort::shellSort(int arr[], int N)
{
	for (int gap = N / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < N; i += 1)
		{
			//sort sub lists created by applying gap 
			int temp = arr[i];

			int j;
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
				arr[j] = arr[j - gap];

			arr[j] = temp;
		}
	}
}

void Sort::shellSortList(ListaEnlazada lis, int N)
{
	for (int gap = N / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < N; i += 1)
		{
			//sort sub lists created by applying gap 
			int temp = lis.obtenerPorposicion(i);

			int j;
			for (j = i; j >= gap && lis.obtenerPorposicion(j - gap) > temp; j -= gap)
				lis.obtenerPorposicion2(j)->setValor(lis.obtenerPorposicion(j - gap));

			lis.obtenerPorposicion2(j)->setValor(temp);
			
		}
	}
}




