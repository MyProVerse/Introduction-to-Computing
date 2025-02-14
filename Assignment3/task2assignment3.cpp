#include <iostream>
using namespace std;

int
main()
{
	int i, j, height, choice;

	cout << "please enter height of the shape: ";
	cin >> height;

	cout << endl;

	cout << "Press 1 for shape 1." << endl;
	cout << "Press 2 for shape 2." << endl;
	cout << "Press 3 for shape 3." << endl;
	cout << "Press 4 for shape 4." << endl;
	cin >> choice;

	if (choice == 1)
	{
		cout << "Your choice: " << choice << endl;

		for (i = 0; i < height; i++)
		{
			for (j = 0; j <= i; j++)
			{
				cout << "* ";
			}
			cout << endl;
		}
	}
	else if (choice == 2)
	{
		cout << "Your choice: " << choice << endl;

		for (i = height; i >= 0; i--)
		{
			for (j = i; j > 0; j--)
			{
				cout << "* ";
			}
			cout << endl;
		}

	}
	else if (choice == 3)
	{
		cout << "Your choice: " << choice << endl;

		for (i = 0; i < height; i++)
		{
			for (j = 1; j <= i; j++)
			{
				cout << "* ";
			}
			cout << endl;
		}
		for (i = height; i >= 0; i--)
		{
			for (j = i; j > 0; j--)
			{
				cout << "* ";
			}
			cout << endl;
		}


	}


	else if (choice == 4)
	{
		cout << "Your choice: " << choice << endl;

		for (int i = height; i >= 2; --i)
		{
			for (int j = i; j >= 1; --j)
			{
				cout << "* ";
			}
			cout << endl;
		}

		for (int i = 1; i <= height; ++i)
		{
			for (int j = 1; j <= i; ++j)
			{
				cout << "* ";
			}
			cout << endl;
		}

	}
	system("pause");
	return 0;
}
