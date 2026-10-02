#include<iostream>
using namespace std;
int main(){
    int a , b ;
    cout<<"enter two numbers :";
    cin>>a>>b;
    char operand;
    cout<<"enter what you want to perform (+ , -, *, /, % )  ";
    cin>>operand;
    switch(operand){
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            cout<<a/b<<endl;
            break;
        case '%':
            cout<<a%b<<endl;
            break;
        default:
            cout<<"invalid"<<endl;
    }

}