#include<iostream>
#include"First_seminar.h"

using namespace std;
int Eror1(double* arr, int size)
{
	int k = 0;
	int l = 0;
	int d = 0;
	int men = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] <= 0)
		{
			k++;
		}
		if (arr[i] > 0)
		{
			l++;
		}
		if (arr[i] > 0 && arr[i + 1] > 0)
		{
			d++;
		}
	}
	if (k == size)
	{
		cout << "No plus elements" << endl;
		men = 1;
	}
	if (l == 1)
	{
		cout << "One plus element" << endl;
		men = 2;
	}
	if (d == 1)
	{
		cout << "Two elemetns plus" << endl;
		men = 3;
	}
	return men;
}