#include <iostream>
#include <queue>
using namespace std;
int main(){
    //max 
    // priority_queue<int>q;
    //min priority queue
    priority_queue<int , vector<int>, greater<int>>q;
    //add element 
    q.push(140);
    q.push(20);
    q.push(300);
    q.push(130);
    q.push(250);
    q.push(3300);
    q.push(170);
    q.push(210);
    q.push(3500);
    // q.pop();
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.top()<<endl;

    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    
    cout<<endl;
}