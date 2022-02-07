#include <iostream>
using namespace std;
int main()
{
    int input, i = 2;
    bool a = 1;
    cout << "*************************************************\n";
    cout << "Prime Number Detector\n";
    cout << "*************************************************\n";
    cout << "Enter Any Number\n";
    cin >> input;
    cout << "Your Input is : " << input<<endl;
    
    while  (i < input)
    {
        
        if ( input % i == 0 )
        {
            a = 0;
            break;
        }
        i++;
    }

    if ( a== 0)
    {
        cout <<input<< " is Not Prime\n";
    }
    else
    {
        cout << input<<" is Prime\n";
    }

return 0; 
}