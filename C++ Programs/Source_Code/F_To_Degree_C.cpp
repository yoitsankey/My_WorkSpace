#include <iostream>
using namespace std;
int main()
{
    float f, c, input2;
    char input;
    cout << "*********************************************************************\n";
    cout << "Farenheit To Degree Celcius Or Degree Celcius To Farenheit Calculator\n";
    cout << "*********************************************************************\n";
    cout << "To Convert into Farenheit press F or f and for Celcius press C or c \n";
    cin >> input;
    cout << "Your are converting into : ";
    cout << input <<endl;
    cout << "Now Input the value you want to convert into : " << input << endl;
    cin >> input2;
    cout << "Your input is : ";
    cout << input2<<endl;
    if(input == 'f' || input == 'F')
    {
        f = 1.8 * input2 +32;
        cout <<"Your Result is : " << f << endl;
        cout << "Congratulations, You Just converted Degree Celcius To Farenheit :) Program will Terminate Now :) \n";
    }
    else if (input == 'c' || input == 'C')
    {
        c = (input2-32) * 5/9;
        cout <<"Your Result is : " << c << endl;
        cout << "Congratulations, You Just converted Farenheit To Degree Celcius :) Program will Terminate Now :) \n";
    }
    return 0;
}