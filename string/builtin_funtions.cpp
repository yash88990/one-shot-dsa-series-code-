#include <iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string s = "i love programming";
    //check is string empty or not 
    cout<<s.empty()<<endl;
    //check size of string 
    cout<<s.size()<<endl;
    //print char at index 11
    cout<<s[11]<<endl;
    //print char at index 12
    cout<<s.at(12)<<endl;
    //modify
    s[0] = 'I';
    cout<<s<<endl;
    //traverse
    for(char ch : s)cout<<ch;
    cout<<endl;
    //add a char at last
    s.push_back('.');
    for(char ch : s)cout<<ch;
    cout<<endl;
    //concatanation of two strings
    string s2 = " in cpp";
    s = s + s2;
    cout<<s<<endl;
    //delete last element/char
    s.pop_back();
    cout<<s<<endl;
    cout<<s.front()<<" "<<s.back()<<endl;
    //delete elements
    s.erase(2,2);
    cout<<s<<endl;
    //deleet all elements
    // s.clear();
    cout<<s<<endl;
    cout<<s.empty()<<endl;
    //reverse
    reverse(s.begin() , s.end());
    cout<<s<<endl;
    //sort
    sort(s.begin() , s.end());
    cout<<s<<endl;
    //search
    if(s.find('a') == string::npos)cout<<"nahi mila"<<endl;
    else cout<<"mil gya "<<endl;

    string s1 = "hello world";
    //substring
    cout<<s1.substr(3)<<endl;

    string s3 = "helloWorld";
    bool flag=true;
    for(char ch : s3){
        if(isalpha(ch))continue;
        else {
            flag = false;
            break;
        }
    }
    if(flag)cout<<"alpha hai"<<endl;
    else cout<<"alpha nhi h "<<endl;





}