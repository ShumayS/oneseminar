#include "First_seminar.h"
#include <iostream>

using namespace std;

double *EnterArray(int size)
{
	
	double* arr = new double[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
			
		}

	return arr;
}

