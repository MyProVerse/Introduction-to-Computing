#include<iostream>
using namespace std;
int main()
{


	int i=1;
		int	j=1;
	int	a;
	
	cout << "please enter any number: ";
	
	cin >> a;
	cout << endl;

	i = a;
	do{
		j = 1;
		do{
			cout << "*" ;
			j++;
		} while (j <= i);
		cout << endl;
		i--;
	} while (i >= 1);


	system("pause");
	return 0;
}