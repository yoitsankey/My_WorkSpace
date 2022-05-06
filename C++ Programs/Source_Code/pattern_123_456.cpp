/* Program to Print Out a pattern which looks like this 123 if the input value = 3.
                                                        456
                                                        789 
*/
#include <iostream>
using namespace std;
int main()
{
    int input, row=1, temp=1;
    cout<<"*****************************************************************"<< endl;
    cout<<"Enter the value of n where n = number of rows = number of columns"<<endl;
    cout<<"*****************************************************************"<<endl;
    cin >>input;
    cout<<"Your input is "<< input<<endl;
    cout << "Pattern is below:-"<<endl;
    while(row<=input)
    {
        int col=1;
        while(col<=input)
        {
            cout<<temp;
            temp++;
            col++;
        }
        cout << endl;
        row++;
    }
}
