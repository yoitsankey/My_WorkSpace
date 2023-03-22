#include<iostream>
using namespace std;
int main(){
    int input;
    cin>>input;
    for(int row=1;row<=input;row++){
        for(int space = input;space>row;space--){
            cout<<" ";
        }
        for(int col=1;col<=row;col++){
            cout<<col;
        }
        for(int col2=1;col2<row;col2++){
            int reverse_col2=row-col2;
            cout<<reverse_col2;
        }
        cout<<endl;
    }
return 0;
}