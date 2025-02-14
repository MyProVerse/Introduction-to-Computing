#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter any character:"<<endl;
	cin >> ch;
	if (ch >= 65 && ch <= 90){
		cout << "You typed a capital letter" << endl;

		cout << "ASCII value for " <<"'"<<ch<<"' is:"<< int(ch) << endl;
		if (ch % 2 == 0)
			cout << "ASCII value for " << "'" << ch << "'" << "is an even number" << endl;
		if (ch % 2 != 0)
			cout << "ASCII value for" <<"'"<< ch<<"'" <<"is an odd number"<< endl;

	}
	
	
	else if (ch >= 97 && ch <= 122){
		cout << "You typed a lower case  letter" << endl;

		cout << "ASCII value for "<<"'"<<ch<<"' is:" << int(ch) << endl;
		if (ch % 2 == 0)
			cout << "ASCII value for" << "'"<<ch<<"'" <<" is an even number"<< endl;
		if (ch % 2 != 0)
			cout << "ASCII value for" <<"'"<< ch<<"'" <<"is an odd number"<< endl;
	}
			else

				cout << "Invalid character" << endl;

		
	


	system("pause");
	return 0;
}