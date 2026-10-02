#include<iostream>
#include <deque>
using namespace std;
void print(deque<int>d){
    for(int ele : d)cout<<ele<<" ";
    cout<<endl;
}
int main(){
    deque<int>d;
    d.push_back(10);
    d.push_front(20);
    d.push_back(10);
    d.push_front(20);
    d.push_back(10);
    d.push_front(20);
    d.push_back(10);
    d.push_front(20);
    d.pop_front();
    print(d);
    cout<<d.size()<<endl;
    
}