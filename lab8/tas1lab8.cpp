#include<iostream>
using namespace std;
int main()
{
	int num = 0;
	cout << "Please enter any number:";
	cin >> num;

	if (num >0)
		cout << num << "\tYou have entered a positive number" << endl;

	else if (num ==0)
		cout << num << "\tZero  is neither positive nor negative" << endl;

	else 
		cout << num << "\tYou have entered a negative number" << endl;

	system("pause");
	return 0;

}
