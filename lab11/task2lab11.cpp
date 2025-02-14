#include<iostream>
using namespace std;
int main()
{
	int a;
	int i=0;
	int j=0;
	
	cout << "please enter number any number: ";
	cin >> a;

	while (i <= a)
	{
		j = 0;
		while (j <= i)
		{
			cout << " "<<j ;
			j++;
		}
		cout << endl;
		i++;
	}
		
		system("pause");
		return 0;
	}