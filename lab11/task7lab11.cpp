#include<math.h>
#include<iostream>
using namespace std;
int main()
{


	int i;
	int l;
	int a;
	int num;
	cout << "please enter value for X: ";
	cin >> a;
	cout << "please enter values for N: ";
	cin >> l;

	cout << endl << "next greater prime numbers after " << a << " are : " << endl;

	for (num = a; num >= a; num++)
	        {

		for (i = l; i <= (num / 2); i++) 
		    {

			if (num % i == 0)
			{
				i =num ;
				break;

			}
			if (i != num) {
				cout << num << " ";
			}
		    }
	        }
	system("pause");
	return 0;
}