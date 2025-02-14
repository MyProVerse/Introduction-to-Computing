#include<iostream>
using namespace std;
int main()
{
	int num1=1,num2=1;
	int i;
	for (; num1 >= 1 && num2 <= -1&&i<=num2;num1++&&num2++){
		cout << "please enter any number: ";
		cin >> num1;
		
		


			cout << "Wrong Attempt! You have entered a negative number" << endl;
		cout << "please enter any number :";
		cin >> num1;
	
		
		if (num2==0||num1==0)
			break;
		
		num2++;

	}
	
	
		
	system("pause");
	return 0;

}