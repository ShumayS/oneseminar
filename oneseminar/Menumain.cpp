#include "First_seminar.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int select_nomer;

	/*cout << "Select seminar" << endl;
	cout << "\nFirst seminar - 1 " << endl;
	cout << "\nSecond seminar - 2 " << endl;
	cout << "\nThrid seminar - 3 " << endl;*/
	cout << " Select seminar" << endl;
	while (true)
	{
		cout << "\n First seminar - 1 " << endl;
		cout << "\n Second seminar - 2 " << endl;
		cout << "\n Thrid seminar - 3 " << endl;
		cout << "\n Exit - 0" << endl;
		cin >> select_nomer;
		switch (select_nomer)
		{
<<<<<<< Updated upstream
		case '1':
			Firstseminar();
			cout<<"1" << endl;
			break;
		case '2':
			//Вызов второго семинара
			cout << "2" << endl;
=======
		
		case 1:
		system("cls");
		Firstseminar();//Вызов первого семинара		
		break;
		case 2:
			system("cls");
			secondSeminar();//Вызов второго семинара
>>>>>>> Stashed changes
			break;
		case 3:
			system("cls");
			seminar3();//Вызов третьего семинара
			break;
		case 0:
			system("cls");
			cout << "Thank you<3" << endl;
			exit(0);
			break;
		default:
			cout << "Select seminar" << endl;
			break;
		}	
	}
		
}

