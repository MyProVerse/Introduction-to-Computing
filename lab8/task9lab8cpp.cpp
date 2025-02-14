#include<iostream>
using namespace std;
int main()
{
	int i, a, sum = 0;
	for (int i = 1; i <= 10; i++){
		cout << "please enter a integer: ";
		cin >> a;
		sum = sum + a;

	}

	cout << sum << endl;

	system("pause");
	return 0;

}