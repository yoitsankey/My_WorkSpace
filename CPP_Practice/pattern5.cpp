#include<iostream>
using namespace std;
int main(){
    int input;
    cin>>input;
    int count=1;
    for(int row=1;row<=input;row++){
        for(int space=input;space>row;space--){
            cout<<" ";
        }
        for(int col=1;col<=row;col++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
return 0;
}