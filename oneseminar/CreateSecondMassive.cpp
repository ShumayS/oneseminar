#include "First_seminar.h"
#include <iostream>
using namespace std;
int sizeArraySecondOne(const int N)
{
	int n=0;
	while (true) {
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
int sizeArraySecondTwo(const int K)
{
	int k = 0;
	while (true) 
	{
		cin >> k;
		if (k <= 0)
		{

			cout << "The size cannot be zero" << endl;
		}
		else
			break;
	}
	return k;
}

