#include "First_seminar.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	char select_nomer;
	int f=1;
	cout << "Select seminar" << endl;
	cout << "First seminar - 1 " << endl;
	cout << "Second seminar - 2 " << endl;
	cout << "Thrid seminar - 3 " << endl;
	
	while (f != 0)
	{
		cin >> select_nomer;
		switch (select_nomer)
		{
		case '1':
			Firstseminar();
			cout<<"1" << endl;
			break;
		case '2':
			//Вызов второго семинара
			cout << "2" << endl;
			break;
		case '3':
			//Вызов третьего семинара
			cout << "3" << endl;
			break;
		case '4':
			f = 0;
			break;
		default:
			cout << "Viberi nomer" << endl;
		}
		
	}
}

