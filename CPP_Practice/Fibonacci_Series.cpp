#include <iostream>
using namespace std;
int main(){
    int input;
    cin>>input;
    int firstNumber=0;
    int secondNumber=1;
    cout<<firstNumber<<" "<<secondNumber<<" ";
    for(int i = 1; i<input;i++){
        int Sum = firstNumber+secondNumber;
        firstNumber = secondNumber;
        secondNumber = Sum;
        cout << Sum<<" ";
    }
    return 0;
}