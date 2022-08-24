#include <iostream>
using namespace std;
int main()
{
    int input, row =1;
    cin>>input;
    while(row<=input)
    {
        int col=1;
        while(col<=row)
        {
            cout<< row;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}