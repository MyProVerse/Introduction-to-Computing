#include<iostream>
using namespace std;

int main(){

	int counter = 1;
	int i=100;
	int j;

	while ( i <= 200)
	{

		counter = 1;
		cout << i << "  ";
		i += 10;
		 j = i + 10;
		while( counter<10){
			 j += 10;
			if (j >200){
				cout << 0 << "    ";
			}
			else{
				cout << j << "  ";
			}
			counter++;
		}
		cout << endl;
	}
	//sir apne ye wala change krne ko kaha tha //
	system("[pause");
	return 0;
}