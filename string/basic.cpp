#include<iostream>
using namespace std;
int main(){

    int age;
    cout<<"enter your age "<<endl;
    cin>>age;
    cout<<"age is :-> "<<age<<endl;
    cin.ignore();
    string name ;
    cout<<"enter your name here : "<<endl;
    getline(cin,name);
    cout<<"you entered : -> "<<name<<endl;
    return 0;

}