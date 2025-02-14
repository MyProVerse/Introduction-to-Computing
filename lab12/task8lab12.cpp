#include <iostream>
using namespace std;
int
main()
{
	int arr[10] = { 0 };
	int num = 0, sum = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		if (num % 2 == 0)
		{
			if (i % 2 == 0)
			{
				arr[i] = num + 1;

			}
			else
			{
				arr[i] = num;

			}

		}
		if (i % 2 == 0)
		{
			arr[i] = num;

		}
		else
		{
			arr[i] = num + 1;

		}

	}



for (int i = 0; i < 10; i++)
{
	sum = sum + arr[i];

}

cout << sum << endl;

for (int i = 0; i < 10; i++)
{
	cout << arr[i] << endl;

}

system("pause");
return 0;
}
