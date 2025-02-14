#include <iostream>
using namespace std;

int main()
{
	int v1, v2;

	cout << "please enter value of V1: ";
	cin >> v1;
	cout << "please enter value of V2: ";
	cin >> v2;

	for (int i = 1; i <= v2 &&i <= v1; i++, v1 = v1 + 2)
	{
		if (v1 % 2 == 0)

			cout << i << "." << v1 << endl;
		else
			cout << i << "." << v1 + 1 << endl;
	}

	system("pause");
	return 0;
}
