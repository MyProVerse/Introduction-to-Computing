#include <iostream>
using namespace std;
int
main()
{
	int i = -100;
	cout << "please enter numbers between -100 to 100 : " << endl;
	cin >> i;

	if (i > 100 || i < -100)
		cout << "Invalid Input." << endl;

	while (i <= 100)
	{

		if (i >= 0 && i <= 100)
			cout << " You have entered a positive number" << endl;

		else if (i >= -100 && i <= -1)
			cout << "You have entered a negative number" << endl;

		if (i == i)
			break;

		i++;

	}

	system("pause");
	return 0;
}
