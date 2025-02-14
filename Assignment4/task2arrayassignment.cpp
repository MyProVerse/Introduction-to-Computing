#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int array1[1000];
	int v1, v2;
	int count = 1;

	int diff = 0;

	cout << "please enter X value :";
	cin >> v1;

	cout << "please enter Y value :";
	cin >> v2;

	cout << "Array values :" << endl;

	diff = v2 - v1;

	for (int i = 0; i <1000 ; i++)
	{

		array1[i] = rand() % diff + v1 + 1;

		cout << array1[i] << endl;

	}
	cout << "VALUE " << "\t" << "FREQUENCY" << endl;



	for (int i = 0; i<1000; i++)
	{
		int count = 1;

		for (int j = i + 1; j<1000; j++)
		{
			if (array1[i] == array1[j]) 

				count++;
		}
		cout << array1[i] << "\t" << count << "\n";
	}




	system("pause");
	return 0;
}

