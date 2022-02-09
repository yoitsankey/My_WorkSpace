#include <iostream>
using namespace std;
int main()
{
    char input;
    cin >> input;
    if (input >= '0' && input <= '9')
        {
            cout << "This is Numeric";
        }
    else if (input >= 'A' && input <= 'Z')
        {
            cout << "This is Upper Case";
        }
    else if (input>='a' && input <= 'z')
        {
            cout << "This is Lower Case";
        }
    else
        {
            cout << "Invalid Input";
        }
    return 0;
}