#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "please enter any character:" << endl;
	cin >> a;

	if (a >= 'A'&&a <= 'Z')
		cout << "you have typed alphabet" << endl;

	else if (a >= 'a'&&a <= 'z')
		cout << "you have typed alphabet" << endl;

	else if (a >= '0'&&a<'9')
		cout << "you have entered a digit" << endl;

	else
		cout << "you have entered a special character" << endl;

	system("pause");
	return 0;
}