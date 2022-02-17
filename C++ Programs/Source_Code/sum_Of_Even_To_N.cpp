#include <iostream>
using namespace std;
int main()
{
    int input, a = 2, sum = 0;
    cout << "***********************************************\n";
    cout << "SUM OF EVEN NUMBER TO N\n";
    cout << "***********************************************\n";
    cout << "Enter any number : ";
    cin >> input;
    cout << "Yout input is : " << input;
    while ( a < input - 2 )
    {
        a = a + 2;
        sum = sum + a;
    }
    cout << "\nSUM OF EVEN NUMBER TO "<< input << " is " << sum + 2 << " (Input is exclusive)";
return 0;
}