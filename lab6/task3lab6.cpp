#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	cout << "please enter first number:";
		cin >> a;
	cout << "please enter second number:";
	cin >> b;
	if (a > b)
	{
		cout << "the largest number is " << a<<"." << endl;
	}
	if (b > a)
	{
		cout << "the laregest number is " << b <<"."<< endl;
	}

	system("pause");
	return 0;

}