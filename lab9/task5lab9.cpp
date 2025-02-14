#include<iostream>
using namespace std;
int main()
{
	int a = 100;
	cout << "Multiples of 9:" << endl;

	for (; a <= 250; a++){
	if (a % 9 == 0)

		cout << a << endl;
}

	system("pause");
	return 0;
}