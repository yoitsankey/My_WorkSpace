#include <iostream>
using namespace std;
int main()
{
	long int input1, input2;
	char choose;
	cout << "***************************************************************************" << endl;
	cout << "PROGRAM TO PRINT ALL EVEN OR ODD NUMBERS BETWEEN GIVEN RANGE OF NUMBERS :- " << endl;
	cout << "***************************************************************************" << endl << endl;
	cout << "Enter the Smallest Number among the two :- " << endl;
	cin >> input1;
	cout << "Your input is = " << input1 << endl << endl;
	cout << "Enter the Largest Number among the two :- " << endl;
	cin >> input2;
	cout << "Your input is = " << input2 << endl << endl;
	cout << "Which series you wanna print ?\nEven or Odd {Press E for Even or O for Odd}" << endl;
	cin >> choose;
	cout << "Your input is = " << choose << endl << endl;
	if (choose == 'E' || choose == 'e' )
	{
		if (input1 % 2 == 0)
		{
			cout << "Series is as follows :-" << endl;
			while (input1 < input2 - 2)
			{
				cout << input1 + 2 << endl;
				input1 = input1 + 2;
			}
		}
		else
		{
			cout << "Series is as follows :-" << endl;
			while (input1 < input2 - 1 )
			{
				cout << input1 + 1 << endl;
				input1 = input1 + 2;
			}
		}
	}
	else if (choose == 'O' || choose == 'o')
	{
		if (input1 % 2 == 0)
		{
			cout << "Series is as follows :-" << endl;
			while (input1 < input2 -1 )
			{
				cout << input1 + 1 << endl;
				input1 = input1 + 2;
			}
		}
		else
		{
			cout << "Series is as follows :-" << endl;
			while (input1 < input2 - 2 )
			{
				cout << input1 + 2 << endl;
				input1 = input1 + 2;
			}
		}
	}
	else
	{
	cout << "INVALID INPUT";
	}
return 0;
}
