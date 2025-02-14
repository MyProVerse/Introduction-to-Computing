#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	float a = 0, s1 = 0, s2 = 0;
	float sum = 0;
	float average = 0;

	float variance = 0, variance1 = 0;
	float Standard_Deviation = 0;
	cout << "please enter value of S1: ";
	cin >> s1;
	cout << "please enter value of S2: ";
	cin >> s2;
	for (int i = 0; i <= 0 && s2 <= s1; ++i)
	{
		cout << "Press 1 to display Sum of all values" << endl;
		cout << "Press 2 to display Average of values" << endl;
		cout << "Press 3 to display Standard-Deviation of values" << endl;
		cin >> a;

		if (a == 1){

			sum = s1 + s2;
			cout << "The sum of S1 and S2 is: " << sum << endl;
		}
		else if (a == 2){
			average = s1 + s2 / 2;
			cout << "average  of S1 and S2 is: " << average << endl;
		}
		else if (a == 3){
			sum = s1 + s2;
			average = s1 + s2 / 2;
			variance = pow(s1 - average, 2) + pow(s2 - average, 2);
			variance1 = variance / 2;

			Standard_Deviation = sqrt(variance1);

			cout << "the standard deviation of S1 and S2: " << Standard_Deviation << endl;
		}

		else
			cout << "invalid choice" << endl;

	}
	system("pause");

	return 0;
}
