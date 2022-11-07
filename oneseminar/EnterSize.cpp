#include "First_seminar.h"
#include <iostream>

using namespace std;

int sizeArray(const int N)
{
	int n;
	while (true)
	{
		cin >> n;

		if (n <= 0)
		{
			cout << "The size must be greater than 0" << endl;
		}
		else
			break;
	}

	return n;

}