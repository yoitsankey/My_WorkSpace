#include <iostream>
using namespace std;

int main()
{
    int input, row;
    cout<<"*****************************************************************"<< endl;
    cout<<"Enter the value of n where n = number of rows = number of columns"<<endl;
    cout<<"*****************************************************************"<<endl;
    cin >>input;
    cout<<"Your input is "<< input<<endl;
    cout << "Pattern is below:-"<<endl;
    while (row<=input)
    {
        int col =1;
        while (col<=input)
        {
            cout<< col;
            col++;
        }
        cout << endl;
        row++;   
    }
    return 0;
}
