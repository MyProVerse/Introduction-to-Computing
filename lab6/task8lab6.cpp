#include<iostream>
using namespace std;
int main()
{
	char character;
	cout << "please enter a character:";
	cin >> character;
	int character1 = character;
	cout << "ascii code is:" << int(character) << endl;
	if (character1 % 2 == 0 >= 88)
	{
	cout << "the next letter will be : " << char(character1 + 2)  <<   ":asci code of this character is :"  << int(character1 + 2) << endl;
	}

	else
		cout << "the number is odd and   not possible:" << endl;

	if (character1 >= 88){
		cout << " this  number letter  could not posiible." << endl;
	}
	system("pause");

	return 0;

}