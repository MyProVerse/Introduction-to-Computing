#include<iostream>
using namespace std;
int main()
{

	char array1[20] = { '\0' };
	int count = 0;
	cout << "please enter words :";
	cin >> array1;

	for (int i = 0; array1[i] != 0; i++){

		count++;
	}
	cout << "lenght of characters :" << count << endl;

	system("pause");
	return 0;
}