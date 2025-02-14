#include<iostream>
using namespace std;
int main()
{
	int j, i;
	cout << "Pleas enter any  number: ";
	cin >> i;
	cout << endl;
	while (i>= 0){
		int j = i;
		while (j >= 0){
			cout << j << " ";
			j--;
		}
		i--;
		cout << endl;
	}



	system("pause");
	return 0;
}