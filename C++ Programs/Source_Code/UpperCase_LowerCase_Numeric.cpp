#include <iostream>
using namespace std;
int main()
{
    char input;
    cout << "**************************************\n";
    cout << "Uppercase, Lowercase and Numeric Teller\n";
    cout << "**************************************\n";
    cout << "Enter the Input\n";
    cin >> input;
    cout << "Your input is : " << input;
    if (input >= '0' && input <= '9')
        {
            cout << "\nThis is Numeric";
        }
    else if (input >= 'A' && input <= 'Z')
        {
            cout << "\nThis is Upper Case";
        }
    else if (input>='a' && input <= 'z')
        {
            cout << "\nThis is Lower Case";
        }
    else
        {
            cout << "\nInvalid Input";
        }
    return 0;
}