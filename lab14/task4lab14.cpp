#include <iostream>
using namespace std;

int main()
{
	int array[10]{};
	int val{};

	int odd = 1, even = 0;

	while (odd <= 9 || even <= 8)
	{
		cout << "Enter your value : ";
		cin >> val;

		if (val % 2 == 0)
		if (even > 8){

			cout << "Even index are full" << endl;
			cout << "please enter odd indexes now " << endl;
		}
		else
			array[even] = val, even += 2;
		else
		if (odd > 9){

			cout << "Odd index are full" << endl;
			cout << "please enter even indexes now " << endl;

		}
		else
			array[odd] = val, odd += 2;

	}

	system("pause");
	return 0;
}
