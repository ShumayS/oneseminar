#include"First_seminar.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void seminar3()
{
	int i = 0, ii = 0, n = 0, counter = 0, k = 0;
	char *path=new char[100];

	cout << "Enter the path" << endl;
	cin.ignore();
	cin.getline(path, 100, '\n');
	ifstream fin;
	fin.open(path);

	if (!fin.is_open())
	{
		cout << "No file!" << endl;
	}
	else
	{
		cout << "Open!" << endl;
		ifstream fin(path, ifstream::binary);
		if (fin) 
		{
			fin.seekg(0, fin.end);
			int length = static_cast<int>(fin.tellg());

			 if (length < 1)
			{
				cout << "No words in file" << endl;
			}
			else
			{
				fin.seekg(0, fin.beg);
				char* arr = new char[length];
				char* arrtxt = new char[length];

				fin.read(arr, length);

				for (i = 0; i < length; i++)
				{
					counter++;
					if (arr[i] == ',')
					{
						n++;
					}
					else
						if (arr[i] == '.')
						{
							if (n != 0)
							{
								ii = i + 1;
								n = 0;
							}
							else
							{
								for (int j = ii; j < counter; j++)
								{
									arrtxt[j] = arr[j];
									cout << arrtxt[j];
									k = 1;
								}
								ii = i + 1;
							}
						}
					}

				if (k == 0)
				{
					cout << "All sentens contain commans!" << endl;
				}
			}
		}
	}

	fin.close();
}


