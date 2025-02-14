#include<iostream>
using namespace std;
int main()
{
	int start=0;
    int end=0;
	int multiple = 0;
	cout << "please enter start value: ";
	cin >> start;
	cout << "please enter end value: ";
	cin >> end;

	if (start > end)
		cout << "invalid sequence" << endl;

	for (int i = start; i <= end && start<=end ; i++){

		cout << endl;
		cout <<"___________\n"<< "table of " << i <<"\n___________"<< endl;
		cout << endl;
		
		for (int k = 1; k <= 10; k++){
			multiple = i*k;
			cout << i << " x " << k << " = " << multiple << endl;
		    }
		
	       }

	system("pause");
	return 0;
}
