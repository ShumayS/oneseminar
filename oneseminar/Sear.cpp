#include "First_seminar.h"
#include <iostream>
using namespace std;

int ShowARr(int** matrix, int n, int m)
{
	
	/*int s = KOlizhestvo(matrix,n,m);*/
	int* k =SearNegI(matrix,n,m);
		/*for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{

				if (matrix[i][j] < 0)
				{
					for (int count = 0; count < n; count++)
					{
						summa += matrix[i][count];
					}
					cout << "The sum on the line " << i + 1 << " = " << summa << endl;
					j = m;
					summa = 0;
				}
				if (matrix[i][j] < 0)
				{
					k++;
				}
			}
		}
		if (k == 0)
		{
			cout << "No negative elements " << endl;
		}*/

	/*if (SummanaI(matrix, n, m) == -1)
	{
		cout << "No negative element" << endl;
	}
	else
	{
		while (s != 0)
		{
			cout << SummanaI(matrix, n, m) << endl;
			s--;
		}
	}*/
	for (int i = 0; i < n; i++)
	{
		if (k[i] == 1)
		{
			k[i] = Summana(matrix, n, m);
		}
		cout << k[i];
		
	}
	return 0;

	
}

int* SearNegI(int** matrix, int n, int m)
{
	int* negal = new int[n];
	int negal = 999;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] < 0)
			{
				negal += 1;
			}
			
			
		}
	}
	return *negal;
}
int Summana(int** matrix, int n, int m)
{
	int summa = 0;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			summa += matrix[i][j];
		}
	}
	return summa;
}
//int SummanaI(int** matrix, int n, int m)
//{
//	int flag = -1;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (matrix[i][j] < 0)
//			{
//				flag=Summana(matrix, n, m);
//				return flag;
//			}
//			
//		}
//	}
//	
//}
//int KOlizhestvo(int** matrix, int n, int m)
//{
//	int kol = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (matrix[i][j] < 0)
//			{
//				kol++;
//			}
//		}
//	}
//	return kol;
//}