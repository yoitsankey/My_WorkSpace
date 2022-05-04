/* Program to Print Out a pattern (SQUARE MATRIX) which looks like this 111 if the input value = 3.
                                                                        222
                                                                        333 
*/
#include <iostream>

using namespace std;

int main()
{
     int input, row=1;
     cout<<"*****************************************************************"<< endl;
     cout<<"Enter the value of n where n = number of rows = number of columns"<<endl;
     cout<<"*****************************************************************"<<endl;
     cin >>input;
     cout<<"Your input is "<< input<<endl;
     cout << "Pattern is below:-"<<endl;
     while (row<=input)
     {
        int col = 1;
        while(col<=input)
        {
            cout<< row;
            col++;   
        }
        
        cout << endl;
        row++;
     }
     
    return 0;
}
