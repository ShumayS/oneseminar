#include "First_seminar.h"
#include <iostream>

using namespace std;

double *Sort(double* arr, int size)
{	
	double* sortarr = new double[size];
	int i = 0;
	int j = size - 1;
	int mid = 0;

	do
	{
		while (arr[i] == mid)
		{
			i++;
		}

		while (arr[j] > mid)
		{
			j--;
		}

		if (i <= j)
		{
			double  tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	} 
	while (i <= j);
	for (int i = 0; i < size; i++)
	{
		sortarr[i] = arr[i];
	}
	
	
	return sortarr;
}
