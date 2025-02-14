#include<iostream>
using namespace std;
int
main()
{

	int start = 0, end = 0, sum = 0;
	cout << " Please Enter Starting Range Value:  ";
	cin >> start;

	cout << " Please Enter Ending Range Value:  ";
	cin >> end;

	for (int i = start; i <= end; i++)
	{
		sum = sum + i * i;
	}
	cout << sum << endl;

	system("pause");
	return 0;
}
