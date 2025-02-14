#include <iostream>
using namespace std;

int main() {
	int n = 0;
	int factorial = 1;
	cout << "please enter a  number: ";
	cin >> n;

	for (int i = 1; i <= n; ++i)
		factorial =factorial*i;
	cout << "Factorial of " << n << " = " << factorial << endl;

	system("pause");
	return 0;
}