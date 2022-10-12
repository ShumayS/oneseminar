#include "First_seminar.h"
#include <iostream>
using namespace std;
int sizeArray(const int N)
{
	int n;
	while (true) {
		cin >> n;
		if (n <= 1)
		{
			cout << "Size < 0" << endl;
		}
		else
			break;
	}
	return n;

}
double *Array(int size)
{
	
	double* arr = new double[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
			
		}
	return arr;
}
double Minimum(double* arr, int size)
{
	//int size1 = sizeArray();
	double min = arr[0];
	int kol = 0;
	int kolmin = 0, pozicii = 0;
	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
			pozicii++;
		}
	}
	for (int i = 0; i < pozicii; i++)
	{
		kol++;
	}
	for (int i = 0; i < size; i++)
	{
		if (min == min)
		{
			kolmin++;
		}
	}
	cout << " MInimeum = " << min << endl;
	cout<< " KOl = " << kolmin << endl;
	cout << " Poziciya =  " << kol << endl;
	return min;
}
double Summa(double* arr, int size)
{
	double summa = 0;
	int onepozitoin = 0, secondpozition = 0, perviyindex=0,vtoroyindex=0;
	while (true)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i]>0)
			{
				onepozitoin = arr[i];
				perviyindex++;
				break;
			}
		}
		for (int i = 0; i < size; i++)
		{
			if (arr[i] > 0 )
			{
				secondpozition = arr[i];
				vtoroyindex++;
			}
		}
		for   (int i=perviyindex;i < vtoroyindex-1; i++)
		{		
			cout << summa << endl;
				summa +=  arr[i];	
				
		}
		break;
	}
	cout << "pervaya = " << onepozitoin<<endl;
	cout << "second = " << secondpozition << endl;
	cout << "Summa = " << summa << endl;
	return summa;
}
void Sort(double* arr, int size)
{
	
}