#include <iostream>
#include<math.h>
using namespace std;

int main()
{

	int i = 0, a = 10;

	for (int i = 0; i < 1 && a >= 0; i++)
	{


		for (int k = 2; k <7 && a >= 0; k++){

			cout << " " << a--;
			a--;
		}
		cout << endl;
		a = a + 8;

		for (int k = 2; k <7; k++){

			cout << " " << a--;
			a--;
		}
		cout << endl;
		a = a + 8;
		for (int k = 2; k <7; k++){

			cout << " " << a--;
			a--;
		}

		cout << endl;
		a = a + 8;

		for (int k = 2; k <7; k++){

			cout << " " << a--;
			a--;
		}
		cout << endl;
		a = a + 8;

		for (int k = 2; k <7; k++){

			cout << " " << a--;
			a--;

		}
		cout << endl;
	

	}
	system("pause");
	return 0;
}
