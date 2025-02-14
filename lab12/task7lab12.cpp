#include <iostream>
using namespace std;
int main()
{
	int arr[10] = { 0 };
	int num = 0;
	for (int i = 0; i<10; i++)
	{
		if (i % 2 != 0)
		{
			cin >> num;
			if (num % 2 == 0)
			{
				num = num + 1;
				arr[i] = num;

			}
			cout << num << endl;
		}

	}

	system("pause");
	return 0;
}