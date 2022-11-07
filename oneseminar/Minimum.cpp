#include<iostream>
#include "First_seminar.h"

using namespace std;
//
//double Minimum(double* arr, int size)
//{
//	
//
//	
//
//}
void Minimuml(double* arr, int size)
{
	int f = Kol(arr, size);
	if (SecarMin(arr, size) == size)
	{
		cout << "All minimum" << endl;
	}
	else {
		cout << "Minimum = " << arr[SecarMin(arr, size)] << endl;
		cout << "Kol = " << Kol(arr, size) << endl;
		while (f!=0)
		{
		cout << "Pozition : " << SecarMin(arr, size) + 1 << endl;
		f--;

		}
	}
}
int SecarMin(double* arr, int size)
{
	double min = arr[0];
		int	f = 0;
				int k = 0;
		for (int i = 0; i < size; i++)
		{
			if (min > arr[i])
			{
				min = arr[i];
				f =i;
			}
			if (min == arr[i])
			{
				k++;
				if (k == size)
				{
					f = size;
				}
			}
		}
		return f;
}
int Kol(double* arr, int size)
{
	int k = 0;
	double min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (min == arr[i])
		{
			k++;

		}
	}
	return k;
}