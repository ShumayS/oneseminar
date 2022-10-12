
#include<iostream>
#include "First_seminar.h"
using namespace std;
void Firstseminar()
{
	int vibor = 1;
	char nomer;

	cout << "In a one-dimensional array consisting of n real elements, calculate" << endl;
	int size= sizeArray(50);
	double *arr= Array(size);
	cout << "Select task" << endl;
	cout << "1) the minimum element of the array. Find their number and their positions" << endl;
	cout << "2)the sum of the array elements located between the first and last positive elements of the array. Find the positions of the first and last positive elements between which the sum is found" << endl;
	cout << "3)Преобразовать массив таким образом, чтобы сначала располагались все элементы, равные нулю, а потом – все остальные " << endl;
	while (vibor != 0)
	{
		
		cin >> nomer;
		switch (nomer)
		{
			
		case '1':
		{
			Minimum(arr, size);
			//Минимальный элемент
			break;
		}
		case '2':
		{	
			Summa( arr, size);
			//Сумма элементов в границе
		break;
		}
		case '3':
		{	//Сортировка
			Sort(arr, size);
			break;
		}
		case '4':
		{	vibor = 0;
		break;
		default:
			cout << "Viberi nomer" << endl;
		}
		}


	}
}