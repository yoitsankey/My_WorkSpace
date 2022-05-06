// Program to Print even numbers between 1 and the Nth number provided by the user
// Method 1
#include <iostream>

using namespace std;

int main()

{
	cout << "*******************************************" << endl;
	cout << "Even numbers between 1 to Nth numbers" << endl;
	cout << "*******************************************" << endl;

	int a=2, input;
	cout << "Enter the Nth number :-\n";

	cin >> input;
	cout << "The EVEN numbers between 1 and " << input <<" are as follows :-\n";
	while (a < input)
	{
	cout << a << endl;
	a=a+2;
	}
	 
return 0;

}
