#include<iostream>
using namespace std;
int main()
{
	int month; int temp;

	cout << "Enter Month:" << endl;
	cin >> month;

	cout << "Enter Temperature:"<<endl;
	cin >> temp;

	if (month == 1 &&temp<10)
	cout << "Its winter season"<<endl;

	else if (month == 2 &&temp<10)
	cout << "its winter season"<<endl;

    else if (month == 11&&temp<10)
	cout << "its winter season"<<endl;

	else if (month == 12&&temp<10)
	cout << "its winter season"<<endl;

	else 
		cout << "its summer season " << endl;
	

	system("pause");
	return 0;
}