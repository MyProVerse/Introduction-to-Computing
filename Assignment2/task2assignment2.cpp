#include <iostream>
using namespace std;

int main()
{
	int a = 0, sum = 1, multiplication = 1;
	for (int i = a; i <= a; i++)
	{
		cout << "please enter integers: ";
		cin >> a;

		sum = sum + a;
		multiplication = multiplication*a;
	}
	cout << "the sum of all inter values: " << sum << endl;
	cout << "The product of all integers: " << multiplication*-1 << endl;

	system("pause");
	return 0;

}
