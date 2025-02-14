
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char array1[20] = { '\0' };
	char array2[20] = { '\0' };

	int i=0, j, count=0, count1=0, tmp, chk = 0;
	cout << "Enter the Sentance: ";
	cin >> array1;

	cout << "Enter the Word to remove: ";
	cin >> array2;

	for (int i = 0; array1[i] != '\0'; i++){
		count++;
	}

	for (int i = 0; array2[i] != '\0'; i++){
		count1++;
	}

	for (int i = 0; i<count; i++)
	{
		tmp = i;
		for (j = 0; j<count1; j++)
		{
			if (array1[i] == array2[j])
				i++;
		}
		chk = i - tmp;
		if (chk == count1)
		{
			i = tmp;
			for (j = i; j<(count - count1); j++)
				array1[j] = array1[j + count1];
			count = count - count1;
			array1[j] = '\0';
		}
	}
	cout << endl << "New sentance = " << array1;
	cout << endl;

	system("pause");
	return 0;
}