#include<iostream>
using namespace std;
int main()
{
	char array1[20] = { '\0' };
	char array2[20] = { '\0' };
	int count = 0;
	int count1 = 0;
	int count2 = 0;

	cout << "please enter characters for array1: " ;           
	cin >> array1;
	cout << "please enter characters for array2: ";
	cin >> array2;

	for (int i = 0; array1[i] != '\0'; i++){

		count++;

	}
	for (int i = 0; array2[i] != '\0'; i++){

		count1++;
	}
	if (count == count1){
		cout << " TRUE" << endl;
	}
	else
		cout << " FALSE " << endl;

	system("pause");
	return 0;
}