#include<iostream>
using namespace std;

int main()
{
	float const pi = 3.14;
	float radius, area_of_circle;
	area_of_circle = pi*radius*radius;

	cout << " please enter value of radius" << endl;
	cin >> radius;

	cout << pi*radius*radius << endl;

	system("pause");
	return 0;
}
