#include<iostream>
using namespace std;
int main()
{
	float num, num1, num2, num3, num4, num5;

	float sum1, sum2;

	cout << "               MONTH 1" << endl;
	cout << "Please enter petrol expense: " << endl;
	cin >> num;
	cout << "Enter Milage(km) obtained:" << endl;
	cin >> num1;

	cout << "               MONTH 2" << endl;
	cout << "Please enter petrol expense: " << endl;
	cin >> num2;
	cout << "Enter Milage(km) obtained:" << endl;
	cin >> num3;

	cout << "               MONTH 3" << endl;
	cout << "Please enter petrol expense: " << endl;
	cin >> num4;
	cout << "Enter Milage(km) obtained:" << endl;
	cin >> num5;
	sum1 = num + num2 + num4;

	sum2 = num1 + num3 + num5;

	cout << "Average Petrol expense per Km is:" << sum1 / sum2 << endl;
	system("pause");
	return 0;
}