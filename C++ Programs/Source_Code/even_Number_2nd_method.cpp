#include <iostream>

using namespace std;

int  main()
{
	cout << "*****************************************\n";
	cout << "Even Numbers betwwen 1 to Nth numbers \n";
	cout << "*****************************************\n";
	
	int a=1,input;
	cout << "Enter the Nth number\n";
	cin >> input;
	cout << "The EVEN number between 1 to "<< input <<" are as follows :-\n";
 
	while (a<input)
	{
		while(a%2==0)
		{
		cout << a <<endl;
		a++;
		}
	a++;
	}
return 0;
}
