#include<iostream>
using namespace std;
int main()
{
	char array1[20] = { '\0' };
	char array2[20] = { '\0' };
	int  count = 0;

	cout << "please enter words for array1: ";
	cin >> array1;

	cout << "please enter words for array2: ";
	cin >> array2;

	for (int i = 0; array1[i] != '\0'; i++){
		count++;
	}
	for (int i = 0; array2[i] != '\0'; i++)
	{
		array1[count] = array2[i];
		count++;
	}
	array1[count] = '\0';
	cout << "Concatenation: " << endl << array1;
	cout << endl;

	system("pause");
	return 0;
}