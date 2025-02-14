#include <iostream>
using namespace std;

int main()
{
	int i, sum = 0;
	cout << "Numbers between 100 and 200 divisible by 7: " << endl;
	for (i = 100; i <= 200; i++)

	if (i % 7 == 0)
	{
		cout << "number divisible by 7 is: " << i << endl;
		sum += i;
	}
		cout << "sum of all numbers divisble by 7 = " << sum << endl;

	system("pause");
	return 0;
}