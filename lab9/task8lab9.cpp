#include <iostream>
using namespace std;

int main()
{
	int  v2;

	cout << "please enter value of n: ";
	cin >> v2;
	cout << "Below is a list of all even numbers from 1 to "<< v2 << endl;

	for (int i = 2; i <= v2 ; i=i+2)
	{	
			cout << i  <<  endl;
			if (i % 2 != 0)
				cout << i++ << endl;
	}

	system("pause");
	return 0;
}
