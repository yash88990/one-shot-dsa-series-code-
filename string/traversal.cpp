#include <iostream>
using namespace std;
int main(){
    string s = "hello world" ;
    cout<<s<<endl;
    for(int i = 0 ; i < s.size() ; i++){
        cout<<s[i];
    }
    cout<<endl;
    for(char ch : s)cout<<ch;
}