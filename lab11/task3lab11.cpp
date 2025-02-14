#include<iostream>
using namespace std;
int main()
{
	int i = 1;
		int 	j = 1;
	int	a;
	
	cout << "please enter any number: ";

	cin >> a;
	i = 1;
	do{
		j = 1;
		do{
			cout << "*"<< " ";
			j++;
		} while (j <= i);
		i++;
		cout << endl;
	} while (i <= a);



	system("pause");
	return 0;
}