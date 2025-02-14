#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "Please enter  number:" << endl;
	cin >> a;
	if (a % 2 == 0 && a % 3 == 0){

		cout << a + 6 << endl;
		cout << a + 12 << endl;
		cout << a + 18 << endl;
		cout << a + 24 << endl;
		cout << a + 30 << endl;
		cout << a + 36 << endl;

		cout << a + 42 << endl;
		cout << a + 48 << endl;
		cout << a + 54 << endl;
		cout << a + 60 << endl;

	}
	else
		cout << "This number does not give common divisibles  of  both 2 & 3. " << endl;





	system("pause");
	return 0;

}