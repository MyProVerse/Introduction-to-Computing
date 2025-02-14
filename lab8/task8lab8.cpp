#include<iostream>
using namespace std;
int main() {
	int num1;
	int num2;
	int gcd;
	cout << "please enter first number:";
	cin >> num1;

	cout << "please  enter second number:";
	cin >> num2;

	for (int i = 1; i <= num1&&i <= num2; i++) {
		if (num1%i == 0 && num2%i == 0)
			gcd = i;
	}
	cout << "The greatest common divison :" << gcd << endl;

	system("pause");
	return 0;
}