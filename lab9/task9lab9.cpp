#include <iostream>  
using namespace std;
int main()
{
	int i = 0;
	int digi = 0;
	cout << "Please enter any nummber: ";
	cin >> i;

	while (i>0)
	{
		i = i / 10;
		digi++;
	}

	cout << "  Number of digit : " << digi <<endl;

	system("pause");
	return 0;
}