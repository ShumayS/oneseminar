
#include<iostream>
#include "First_seminar.h"

using namespace std;

void Firstseminar()
{
	int vibor = 1;
	int nomer;

	cout << "Enter the size of the array" << endl;
	int size= sizeArray(50);
	cout << "Enter elements" << endl;
	double *arr= EnterArray(size);
	while (vibor != 0)
	{ 
		
		cout << "\n Select task" << endl;
		cout << "\n 1) Find the minimum element of the array and their positions" << endl;
		cout << "\n 2) Find the sum between two positive elements and find their positions" << endl;
		cout << "\n 3) Sort the array so that zero is the first" << endl;
		cout << "\n 0) Return to the choice of the seminar" << endl;
		
		cin >> nomer;
		switch (nomer)
		{
	
		case 1:
		{
			system("cls");
			Minimuml(arr, size);
			//Минимальный элемент
			break;
		}

		case 2:
		{	system("cls");
			Summa( arr, size);
			//Сумма элементов в границе
		break;
		}

		case 3:
		{	//Сортировка
			system("cls");
			 DispaySort(arr, size);
			break;
		}

		case 0:
		{	vibor = 0;

		break;
		default:
			cout << "Select task" << endl;
		}
		}
	}
	delete[] arr;
	system("cls");
}