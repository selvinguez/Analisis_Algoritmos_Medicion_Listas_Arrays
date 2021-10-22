#pragma once

#ifndef SORT_H
#define SORT_H
#include "ListaSimple.h"
class Sort {
private:
	
public:
	static void BubbleSort(int arr[], int n);
	static void BubbleSortList(ListaEnlazada lis, int n);
	static void SelectionSort(int arreglo[], int tamanio);
	static void SelectionSortList(ListaEnlazada lis, int tamanio);
	static void insertionSort(int arr[] , int n);
	static void insertionSortList(ListaEnlazada lis, int n);
	static void shellSort(int arr[], int N);
	static void shellSortList(ListaEnlazada lis, int N);

};

#endif 