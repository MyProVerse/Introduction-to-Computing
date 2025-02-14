#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << " Please enter a number: " << endl;
	cin >> a;

	if (a % 3 == 0 && a % 2 == 0){
		cout << a + 6 << endl;
		cout << a + 12 << endl;

		cout << a + 6 << endl;
		cout << a + 12 << endl;

		cout << a + 18 << endl;
		cout << a + 24 << endl;
		cout << a + 30 << endl;
		cout << a + 36 << endl;

		cout << a + 40 << endl;
		cout << a + 46 << endl;
		cout << a + 52 << endl;
		cout << a + 60 << endl;
		cout << "These are common multiples of 2 & 3. " << endl;
	}

	else
		cout << "This number does not give common mutiples of both  2 and 3. " << endl;

	
	
	

	system("pause");
	return 0;

}