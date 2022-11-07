#include "First_seminar.h"
#include <iostream>
using namespace std;
int** CreateA(int n, int m)
{
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	return arr;
}