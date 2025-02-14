#include<iostream>
using namespace std;
int main()
{
	int i = 1, sum = 0;
	int a = 100;


	while (a <= 250 && a >= 100 && i <= 10)
	{
		cout << "please enter number: ";
		cin >> a;

		if (a<100 || a>250)
			cout << "invalid number please run program again and enter numbers betwwen 100 - 250 " << endl;

		sum = sum + a;
		i++;
	}
	cout << sum << endl;

	system("pause");
	return 0;
}