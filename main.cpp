#include <iostream>
#include <cmath>
using namespace std;
int sum(int a, int b) {
    return a+b;
}
int sub(int a,int b) {
    return a -b;
}
int mul(int a, int b) {
    return a*b ;
}
int divide(int a, int b) {
    return a / b;
}
int mod(int a,int b) {
    return a % b;
}
 int main() {
    int num1;
    int num2;
    char op;
    cout<<"This is calculator"<<endl;
    cout<<"Please enter your first number:";
    cin>>num1;
    cout<<"Please enter your seconde number:";
    cin>>num2;
    cout<<"Please enter your operation (+,-,*,/,%):";
    cin>>op;
    int result ;
    switch (op) {
        case '+':
            result =sum(num1, num2);
            break;
        case '-':
            result = sub(num1, num2);
            break;
        case '*':
            result =mul(num1, num2);
            break;
        case'/':
            result =divide(num1, num2);
            break;
        case '%':
            result = mod(num1, num2);
            break;
        default:
            cout<<"Error!!"<<endl;

    }
    cout<<num1<<"  "<<op<<" "<<num2<<" ="<<result<<endl;
    return 0;
}












