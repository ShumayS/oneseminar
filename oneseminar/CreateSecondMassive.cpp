#include "First_seminar.h"
#include <iostream>
using namespace std;
int sizeArraySecondOne(const int N)
{
	int n=0;
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
int sizeArraySecondTwo(const int K)
{
	int k = 0;
	while (true) {
		cin >> k;
		if (k <= 1)
		{

			cout << "Size < 0" << endl;
		}
		else
			break;
	}
	return k;

}
double* secondArray( int oneSize, int secondSize)
{
	int onesize = oneSize;
	int secondsize = secondSize;
	double** secondArr = new double* [onesize];
	for (int i = 0; i < onesize; i++)
	{
		secondArr[i] = new double[secondsize];
		for (int j = 0; j < secondsize; j++)
		{
			cin >> secondArr[i][j];
		}
	}
	return *secondArr;
}
double showArray(double** arr2, int oneSize, int secondSize)
{
	int onesize = oneSize;
	int secondsize = secondSize;
	double** secondArr = arr2;
	for (int i = 0; i < oneSize; i++)
	{
		secondArr[i] = new double[secondsize];
		for (int j = 0; j < secondSize; j++)
		{
			cout << arr2 << " ";
		}
	}
	return **secondArr;
}