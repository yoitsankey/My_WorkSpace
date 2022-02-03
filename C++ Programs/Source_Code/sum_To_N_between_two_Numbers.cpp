#include <iostream>
using namespace std;
int main()
{
	int input1, input2, sum = 0;
	char choose;
	cout << "*****************************************************************\n";
	cout << "Program to print the sum of all numbers between two given numbers\n";
	cout << "*****************************************************************\n";
	cout << "Enter the smallest number among the two :-\n";
	cin >> input1;
	cout << "Your input is : " << input1 << endl;
	cout << "Enter the largest number among the two :-\n";
	cin >> input2;
	cout << "Your input is : " << input2 << endl;
	cout << "CHOOSE IF BOTH GIVEN INPUTS WILL BE INCLUSIVE OR EXCLUSIVE IN THE SUM AND PRESS Y FOR INCLUSIVE AND N FOR EXCLUSIVE\n";
	cin >> choose;
	if ( choose == 'Y' || choose == 'y')
	{
	cout << "You chosen both the provided inputs to be INCLUSIVE in the SUM\n";
		while (input1 <= input2)
		{
			sum += input1;
			input1++;
		}
		cout << "The SUM is : "<< sum << endl;
	}
	else if ( choose == 'N' || choose == 'n' )
	{
	cout << "You chosen both the provided inputs to be EXCLUSIVE in the SUM\n";
		while (input1 < input2 - 1)
		{
			input1++;
			sum += input1;
		}
		cout << "The SUM is : " << sum << endl;
	}
	else
	{
		cout << "Invalid Input";
	}
return 0;
}

