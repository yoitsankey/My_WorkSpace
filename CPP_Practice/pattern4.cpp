#include<iostream>
using namespace std;
int main(){
    int input;
    cin>>input;
    for(int row=1; row<=input; row++){
        for(int space = input;space>row;space--){
            cout<<" ";
        }
        for(int col=1;col<=row;col++){
            cout<<row;
        }
        cout<<endl;
    }
return 0;
}