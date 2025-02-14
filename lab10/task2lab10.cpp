#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int base=0,expo=0,power=0;
	cout << "please enter value for base: ";
	cin >> base;
	cout << "please enter value for power: ";
	cin >> expo;
	for (int i = 0; i <= base; i++)

	{
		power = pow(base, expo);
	}
	cout << "power of " << "(" << base << "," << expo << ") = "<< power << endl;


	system("pause");
	return 0;
}