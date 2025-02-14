#include<iostream>
using namespace std;
int main() {

	int v = 0;
	cout << "please enter a Value:";
	cin >> v;
	if (v < 0) {
		cout << "Absolute value is:" << v*-1 << endl;
	}
	if (v>0){
		cout << "Absolute value is:" << v*1 << endl;
	}
	system("pause");
	return 0;
}