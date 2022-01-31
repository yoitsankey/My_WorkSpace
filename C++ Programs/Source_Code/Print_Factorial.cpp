// can print factorial upto 65

#include <iostream>
using namespace std;
int main()
{
    unsigned long long int a=1, input, factorial = 1;
    cout <<"********************************************************" << endl;
    cout << "Enter the number the factorial of which you want :- " << endl;
    cout <<"********************************************************" << endl;
    cin >> input;
    cout << "Entered number is = " << input << endl;
        while (a<=input)
        {
        factorial *= a;
        a++;
        }
    cout << "And the Factorial of Entered Number "<< input << " is " << factorial;
return 0;
}
