#include<iostream>
using namespace std;
int main(){
    int input;
    cin>>input;
    for(int row=1;row<=input;row++){
        for(int col=row;col<=input;col++){
            cout<<row;
        }
        cout<<endl;
    }
return 0;
}