#include<iostream>
using namespace std;
int main(){
    int input;
    cin>>input;
    int g = input;
    for(int row=1;row<=input;row++){
        for(int space = 1;space<row;space++){
            cout<<" ";
        }
        for(int col=row;col<=g;col++){
            cout<<col;
        }
        cout<<endl;
    }
return 0;
}