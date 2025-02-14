#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int base=0;
	int expo = 0;
	

	cout << "please enter Base value: ";
	cin >> base;
	cout << "please enter exponent value: ";
	cin >> expo;
	do
	{
		cout <<"power "<<"("<<base<<","<<expo<<")" <<"= "<<pow(base, expo) << endl;
		base++;
		if (base == base)
			break;
	} while ( expo>=0);
	
	
	
	
	

	system("pause");
	return 0;
}