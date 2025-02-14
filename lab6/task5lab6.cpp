#include<iostream>
using namespace std;
int main()
{
	int l=0;
	int m =0;
	cout<< "please enter first number:";
	cin >> l;
	cout << "please enter second number:";
	cin >> m;
	if (l > m)
	{
		cout <<l<< " is greater than " << m << endl;
	}
	if (m > l){
		cout <<m<< " is greater than " << l << endl;
	}
	if (l==m)
	{
		cout << "both numbers are equal."<<endl;

	}
	
	system("pause");
	return 0;
}