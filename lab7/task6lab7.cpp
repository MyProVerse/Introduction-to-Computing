
#include<iostream>
using namespace std;
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	cout << "Please enter num1 value:" << endl;
	cin >> num1;
	cout << "please enter num2 value:" << endl;
	cin >> num2;
	cout << "please enter num3 value:" << endl;
	cin >> num3;


	if (num1 > num2)
	{
		if (num1 > num3)
		{
			cout << "num1 is maximum";
		}
	}
	else if (num2 > num1)
	{
		if (num2 > num3)
		{
			cout << "num2 is maximum";
		}

		else
		{
			cout << "num3 is maximum";
		}
	}

	system("pause");
	return 0;
}