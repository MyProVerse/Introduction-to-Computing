#include <iostream>
using namespace std;
int main()
{

	int arr[10] = { 0 };
	for (int i = 0; i<10; i++)
	{
		cin >> arr[i];

	}
	for (int i = 0; i<10; i++)
	{
		if (i % 2 != 0)
		{
			cout << arr[i]<<" ";

		}

	}
	for (int i = 0; i<10; i++){
		if (i % 2 == 0)
		{
			cout << arr[i]<<" ";

		}

	}

	cout << endl;

	system("pause");
	return 0;
}