#include "First_seminar.h"
#include <iostream>

using namespace std;

void Summa(double* arr, int size)
{	
	/*	for (int i = 0; i < size; i++)
		{
			if (arr[i] <= 0)
			{
				k++;
			}
			else 
			{
				s++;
			}
			if (arr[i] > 0 && arr[i + 1] > 0)
			{
				j++;
			}
						
		}

		for (int i = 0; i < size; i++)
		{
			if (arr[i] > 0)
			{
				onepozitoin = arr[i];
				perviyindex++;
				break;
			}
		}

		for (int i = 0; i < size; i++)
		{
			if (arr[i] > 0)
			{
				secondpozition = arr[i];
				vtoroyindex++;

			}
		}*/

		/*for (int i = perviyindex; i < vtoroyindex-1; i++)
		{
			o++;
			summa += arr[i];
		}

		if (k == size)
		{
			cout << "No plus elements" << endl;
		}

		if (s == 1)
		{
			cout << "One plus elements" << endl;
		}

		if (j == 1)
		{
			cout << "Two positive ones in a row" << endl;
		}

		if (o == 1)
			{
				cout << "One element between two" << endl;
		}

		else 

			if (s!=1&&j!=1&&0!=1&&k!=size) 
		{*/
	if (Eror(arr, size) == size)
	{
		cout << "no plus elements" << endl;
	}
	else
			cout << "Summa = " << Summaall(arr, size) << endl;
			cout << "First = " << Firstpoziton(arr,size) << endl;
			cout << "Second = " << Secondpoziton(arr,size) << endl;      
	}

double Firstpoziton(double* arr, int size)
{
	double onepozitoin = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			onepozitoin = arr[i];
			break;
		}
	}
	return onepozitoin;
}
int Firstindex(double* arr, int size)
{
	int  perviyindex = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] = Firstpoziton(arr,size))
		{
			perviyindex= i;
			break;
		}
	}
	return perviyindex;
}
double Secondpoziton(double* arr, int size)
{
	double secondpozition = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			secondpozition = arr[i];
		}
	}
	return secondpozition;
}
int Secondindex(double* arr, int size)
{
	int  vtoroyindex = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == Secondpoziton(arr, size))
		{
			vtoroyindex=i;
		}
	}
	return vtoroyindex;
}
double Summaall(double* arr, int size)
{
	double summa = 0;
	for (int i = Firstindex(arr, size)+1; i < Secondindex(arr, size); i++)
	{
		summa += arr[i];
	}

	return summa;
}
int Eror(double*arr,int size)
{
	int k = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] <= 0)
		{
			k++;
		}

	}
	return k;
}