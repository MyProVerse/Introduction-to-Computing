#include<iostream>
using namespace std;
int
main()
{


	int fact = 1;
	for (int i = 5; i <= 9; i++)
	{
		fact = 1;

		cout << "Factorial of " << i << " :" << endl;

		for (int j = i; j >= 1; j--)
		{
			fact *= j;
		}
		cout << fact << endl << endl;
	}

	system("pause");
	return 0;
}
