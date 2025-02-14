#include<iostream>
using namespace std;
int main()
{
	int i, sum = 0;
	while (i != 0)
	{
		cout << "please enter number: ";
		cin >> i;
		sum = sum + i;
	}
	cout << sum << endl;

	system("pause");
	return 0;
}