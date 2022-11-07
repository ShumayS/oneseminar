#include "First_seminar.h"
#include <iostream>
using namespace std;
void secondSeminar()
{
	cout << "Enter size" << endl;
	int sizeOne = sizeArraySecondOne(50);
	cout << "Enter size" << endl;
	int sizeTwo = sizeArraySecondTwo(50);
	int** matr;
	cout << "\nEnter elements" << endl;
	matr = CreateA(sizeOne, sizeTwo);
	
	int chose = 1;
	cout << "\n Chose number" << endl;
	while (chose != 0)
	{
		
		cout << "\n 1) Find the sum in the row where there are negative elements" << endl;
		cout << "\n 2) Find the saddle point" << endl;
		cout << "\n 0) Return to the choice of the seminar" << endl;
		cin >> chose;

			switch (chose)
		{
		case 1:
			system("cls");
			ShowARr(matr, sizeOne, sizeTwo);
			break;
		case 2:
			system("cls");
			SearchSedl(matr, sizeOne, sizeTwo);
			
			break;
		case 0:
			chose = 0;
			break;
		default:
			cout << "Select task" << endl;
		}

	}
	delete [] matr;
	system("cls");
}