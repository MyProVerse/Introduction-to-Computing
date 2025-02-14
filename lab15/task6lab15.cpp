#include <iostream>
using namespace std;

int main()
{
	char array1[20] = { '\0' };
	int count = 0;

	cout << "please input any word :";
	cin >> array1;

	for (int i = 0; array1[i] != '\0'; i++){

		if (array1[i] >= 'A' && array1[i] <= 'Z') {
			array1[i] = array1[i] + 32;
			count++;
		}

	}
	cout << endl << " input is converted into lower case: " << array1 << endl;


	for (int i = 0; array1[i] != '\0'; i++){

		if (array1[i] >= 'a' && array1[i] <= 'z') {
			array1[i] = array1[i] - 32;
			count--;
		}

		
	}
	cout << endl << " input is converted into upper case: " << array1 << endl;

	system("pause");
	return 0;
}