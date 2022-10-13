#include "First_seminar.h"
#include <iostream>
using namespace std;
void secondSeminar()
{
	int sizeOne = sizeArraySecondOne(50);
	int sizeTwo = sizeArraySecondTwo(50);
	double* secondarr ;
	secondarr = secondArray(sizeOne, sizeTwo);
	int chose = 1;

	while (chose != 0)
	{
		cin >> chose;

			switch (chose)
		{
		case '1':
		{
			 showArray(&secondarr,sizeOne,sizeTwo);
			break;
		}
		case '2':
		{

		}

		
		case '3':
		{
			chose = 0;
			break;
			
		}
		}

	}
}