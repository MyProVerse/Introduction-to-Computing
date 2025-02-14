#include<iostream>
using namespace std;
int main()
{

	float hours;
	cout << "Please enter hours per week:"<<endl;

	cin >> hours;
	if (hours > 40)
		cout << "Pay of this week is :" << 32000 + (hours - 40)*0.5 * 800 << endl;
	else if (hours <= 40 )
		cout <<"Pay of this week is :"<< hours * 800 << endl;
	






	system("pause");
	return 0;

}