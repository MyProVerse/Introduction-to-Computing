#include<iostream>
using namespace std;
int main()
{
	int start, end, result = 0;

	cout << "please enter starting value  i.e. X:: ";
	cin >> start;

	cout << "please enter ending value i.e. Y:: ";
	cin >> end;

	cout << "Value \tisPrime" << endl;

	for (int i = start; i <= end; i++)
	{

		for (int j = 2; j < i; j++)
		{

			if (i % j == 0)
				result++;
			
		}
			if (result == 0 )
			{
				cout << i<<"\tYES " << endl;
			}
			if (result != 0 )
			{

				cout << i << "\tNO " << endl;
			}
			result = 0;
		
		
	}

	system("pause");
	return 0;
}