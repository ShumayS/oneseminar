#include "First_seminar.h"
#include <iostream>
using namespace std;
void SearchSedl(int** matrix, int sizeOne, int sizeTwo)
{
	
	////for (int i = 0; i < sizeOne; i++)
	////{
	////	/*int min = matrix[i][0], index = 0;
	//	for (int j = 1; j < sizeOne; j++)
	//	{
	//		if (min > matrix[i][j])
	//		{
	//			min = matrix[i][j];
	//			index = j;
	//		}
	//	}

	//	
	//	int k;
	//	for (k = 0; k < sizeOne; k++)
	//	{
	//		if (min < matrix[k][index])

	//			break;
	//	}*/
	if (Seldpoint(matrix, sizeOne, sizeTwo) == 1)
	{
		cout << "no" << endl;
	}
	else
	{
		cout << Seldpoint(matrix, sizeOne, sizeTwo) << endl;
	}
}
//int Minimal(int** matrix, int sizeOne, int sizeTwo)
//{
//	for (int i = 0; i < sizeOne; i++)
//	{
//		int min = matrix[i][0];
//		for (int j = 1; j < sizeOne; j++)
//		{
//			if (min > matrix[i][j])
//			{
//				min = matrix[i][j];
//				return min;
//			}
//		}
//	}
//	
//}
//int PosI(int** matrix, int sizeOne, int sizeTwo)
//{
//	int index = 0;
//	for (int i = 0; i < sizeOne; i++)
//	{
//		int min = matrix[i][0];
//		for (int j = 1; j < sizeOne; j++)
//		{
//			if (min > matrix[i][j])
//			{
//				min = matrix[i][j];
//				index = j;
//			}
//			return index;
//		}
//	}
//	return index;
//}
//int PosJ(int** matrix, int sizeOne, int sizeTwo)
//{
//	for (int i = 0; i < sizeOne; i++)
//	{
//		int k;
//		for (k = 0; k < sizeOne; k++)
//		{
//			if (Minimal(matrix, sizeOne, sizeTwo) < matrix[k][PosI(matrix,sizeOne,sizeTwo)])
//
//				break;
//		}
//		return k;
//	}
//
//}
int Seldpoint(int** matrix, int n, int m)
{

	for (int i = 0; i < n; i++)
	{
		int min = matrix[i][0], indexi = 0;
		for (int j = 1; j < n; i++)
		{
			if (min < matrix[i][j])
			{
				min = matrix[i][j];
				indexi = j;
			}
		}
		int k;
		for (k = 0; k < n; k++)
		{
			if (min < matrix[k][indexi])
				break;
		}
		if (k == n)
		{
			return min;
		}
	}
	return 1;
}
	

