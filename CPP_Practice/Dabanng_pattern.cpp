// Dabanng Pattern
#include<iostream>
using namespace std;
int main(){
    int input;
    cin>>input;
    int a = input;
    int c = input;
    for(int row=1;row<=input;row++){
        for(int col=1;col<=a;col++){
            cout<<col;
        }
        a--;
        for(int star=1;star<(2*row)-1;star++){
            cout<<"*";
        }
        for(int col2=c;col2>=1;col2--){
            cout<<col2;
        }
        c--;
        cout<<endl;
    }
return 0;
}
