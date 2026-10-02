#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int>s;
    //insert
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.size()<<endl;
    // s.pop();
    s.top();
    cout<<s.top()<<endl;

    //traversal
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    //size
    cout<<s.size()<<endl;
}