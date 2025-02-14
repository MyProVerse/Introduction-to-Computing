#include<iostream>
using namespace std;
int num(int);
int main()
{
	int a;
	cout << "Please enter any number: " << endl;
	

	cin >> a;
	if (a % 2 == 0){
		cout << " Even numbers are:" << endl;
		cout << a + 2 << endl;
		cout << a + 4 << endl;
		cout << a + 6 << endl;
		cout << a + 8 << endl;
		cout << a + 10 << endl;
		cout << a + 12 << endl;
		cout << a + 14 << endl;
		cout << a + 16 << endl;
		cout << a + 18 << endl;
		cout << a + 20 << endl;

	}
	else if (a % 2 != 0){

		cout << "Even numbers:" << endl;
		cout << a + 1 << endl;
		cout << a + 3 << endl;
		cout << a + 5 << endl;

		cout << a + 7 << endl;
		cout << a + 9 << endl;
		cout << a + 11 << endl;
		cout << a + 13 << endl;
		cout << a + 15 << endl;
		cout << a + 17 << endl;
		cout << a + 19 << endl;


	}
	system("pause");
	return 0;
}