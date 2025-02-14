#include<iostream>
using namespace std;
int main()
{
	int y = 0;
	int z = 0;
	cout << "please enter first number: ";
	cin >> y;
	cout << "please enter second number:";
	cin >> z;
	if (y > z)
	{
		cout <<y<< " is greater than " <<z<< endl;
	}	
	if (z > y)
	{
		cout << z<<" is greater than " << y << endl;

	}
	system("pause");
	return 0;
}