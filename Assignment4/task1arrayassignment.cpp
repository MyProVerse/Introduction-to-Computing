

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int array1[100];
	int i = 0;
	
	int min;
	int max;
	cout << "Random values of array:  " << endl;

	for (i = 0; i<100; i++)
	{
		array1[i] = rand() % 201 - 100;

		cout << array1[i] << " ";
	}

	max = min = array1[0];

	for (int i = 0; i < 100; i++) 
	{
		if (max < array1[i])
		{
			max = array1[i];
		}
	}
	cout << endl;
	cout << "largest value " << max << endl;

	for (int i = 0; i < 100; i++) 
	{
		if (min > array1[i])
		{
			min = array1[i];
		}
	}

	cout << endl;
	cout << "smallest value " << min << endl;

	system("pause");
	return 0;
}
