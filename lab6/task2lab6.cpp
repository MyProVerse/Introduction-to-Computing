#include<iostream>
using namespace std;
int main()
{

	cout << "please enter a number :";
	float n;
	cin >> n;
	int r = n / 1;
	if (n <= 0 || n >= 0 && r * 1 == n)
	{
		cout << "the number is integer :" <<n<<endl;
	}
	if (n <= 0 || n >= 0 && r* 1 != n)
	{
		cout << "the number is float :"<<n<<endl;
	}

	system("pause");
	return 0;
}