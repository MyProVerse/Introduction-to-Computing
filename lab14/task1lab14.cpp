#include<iostream>
using namespace std;
int main()
{
		int array1[12] ;
		int array2[6] = { 0 };
		int  k = 0;

		cout << "please enter 12 numbers: " << endl;

		for (int i = 0; i < 12; i++)
		{
			cin >> array1[i];
		}

		for (int i = 0; i<12; i += 2)
		{
			
			array2[k] = array1[i + 1] - array1[i];
			k++;
		}
		for (int i = 0; i<6; i++)
		{

			cout << "Pair " << i + 1 << ": " << array2[i] << endl;

		}


	

	system("pause");
	return 0;
}