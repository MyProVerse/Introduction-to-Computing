#include <iostream>
using namespace std;

int main(){
	char array1[20] = { '\0' };

	int  count=0;
	int flag = 0;

	cout << "please enter any word: ";
	cin >> array1;

	for (int i = 0; array1[i] != '\0'; i++){
		count++;
	}

	for (int i = 0; i < count; i++){
		if (array1[i] != array1[count-i-1]){
			flag = 1;
			break;
		}
	}


	if (flag) {
		cout << array1 << " is not a palindrome word" << endl;
	}
	else {
		cout << array1 << " is a palindrome word" << endl;
	}
	system("pause");
	return 0;
}