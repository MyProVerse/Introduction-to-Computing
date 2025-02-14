#include<iostream>
using namespace std;
int main()
{
	int array1[12];
	int array2[6] = { 0 };
	int  k = 0;
	int i = 0;
	int max;
	int min;
	
	cout << "please enter 12 numbers: " << endl;

	for (int i = 0; i < 12; i++)
	{
		cin >> array1[i];
	}

	for (int i = 0; i<12; i += 2)
	{

		array2[k] = array1[i + 1] + array1[i];
		k++;
	}
	for (int i = 0; i < 6; i++)
	{

		cout << "Sum for elements " << i * 2 + 1 << " and " << i * 2 + 2 << " is " << endl << array2[i] << endl;

	}

	max = min = array2[0];
	for (int i = 0; i < 6; i++) {
		if (max < array2[i]) {
			max = array2[i];
		}
		cout << endl;
		cout << "Max sum of neighbours in array is " << max << " of element:" << i * 2 + 1 << " and " << i * 2 + 2 << endl;
	}
	for (int i = 0; i < 6; i++) {
		if (min > array2[i]) {
			min = array2[i];
		}
	}
	
	cout << endl;
	cout << "Min sum of neighbours in array is" << min << " of element:" <<i * 2 + 1 << " and " << i * 2 + 2 << endl;




	system("pause");
	return 0;
}
