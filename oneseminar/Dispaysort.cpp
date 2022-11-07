#include "First_seminar.h"
#include <iostream>

using namespace std;
void DispaySort(double* arr, int size)
{
	system("cls");
	cout << "No sort Massive" << endl; 
	displayMassive(arr, size);
	double* sortarr = new double[size];
	sortarr = Sort(arr, size);
	cout << "Sort Massive" << endl;
	displayMassive(sortarr, size);
	delete[] sortarr;
	sortarr = NULL;
}