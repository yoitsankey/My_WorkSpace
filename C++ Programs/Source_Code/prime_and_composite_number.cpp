#include <iostream>
using namespace std;
int main()
{
    int input, i = 2;
    bool a = 1;
    cout << "*************************************************\n";
    cout << "Prime & Composite Number Detector\n";
    cout << "*************************************************\n";
    cout << "Enter Any Number\n";
    cin >> input;
    cout << "Your Input is : " << input<<endl;
    
    if (input < 0)
    {
        cout <<"Negative Numbers are not prime";
    }
    
    else if (input==0)
    {
            cout <<"0 is Neither prime nor composite";
    }

    else if(input==1)
    {
        cout <<"1 is Neither prime nor composite";
    }

    else 
    {
        while  (i < input)
        {
            if(input % i == 0)
            {
                a = 0;
                break;
            }
        i++;
        }

        if ( a == 0)
        {
            cout << input << " is Composite";
        }
        else
        {
         cout << input <<" is Prime";
        }
    }
return 0; 
}