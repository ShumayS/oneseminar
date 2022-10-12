#include "First_seminar.h"
#include <iostream>
using namespace std;
double Summa(double* arr, int size)
{
	double summa = 0;
	int k=0,s=0;
	int onepozitoin = 0, secondpozition = 0, perviyindex = 0, vtoroyindex = 0;
	while (true)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] > 0)
			{
				k++;
					if (k == 1)
					{
						cout << "one polozh" << endl;
						break;
					}
			}
			 if (arr[i] <= 0)
			{
				s++;
				if (s = size)
				{
					cout << "net polozh" << endl;
					
				}
			}
			else if (arr[i] > 0 || arr[i + 1] > 0)
			{
				cout << "2 polozh pod" << endl;
			}
			else {
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
				}
				for (int i = perviyindex; i < vtoroyindex - 1; i++)
				{
					cout << summa << endl;
					summa += arr[i];

				}
				break;
			}
			cout << "pervaya = " << onepozitoin << endl;
			cout << "second = " << secondpozition << endl;
			cout << "Summa = " << summa << endl;
			return summa;
		}
	}
}
void Sort(double* arr, int size)
{
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
			int  tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	} while (i <= j);
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	
}
