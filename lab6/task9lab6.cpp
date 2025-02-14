#include<iostream>
using namespace std;
int main()
{

	int a;
	cout << "please enter a number:";
	cin >> a;
	if (a % 2 == 0)
	{
		cout << "number is divisible by 2 "  << endl;
	}
	if (a%2!=0){
		cout << "number is not divisible by 2 " << endl;
}
	system("pause");
	return 0;
}