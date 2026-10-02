#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main(){
    //declare
    list<int>l;
    //add element
    l.push_back(10);
    for(int num : l)cout<<num<<" <-> ";
    cout<<endl;
    l.push_back(20);
    for(int num : l)cout<<num<<" <-> ";
    cout<<endl;
    l.push_front(30);
    for(int num : l)cout<<num<<" <-> ";
    cout<<endl;
    //access
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
    //update
    l.back()= 50;
    for(int num : l)cout<<num<<" <-> ";
    cout<<endl;
    auto it = l.begin();
    advance(it , 2);
    *it = 100;
    for(int num : l)cout<<num<<" <-> ";
    cout<<endl;
    //find / search
    auto it2 = find(l.begin(),l.end() , 10000);
    if(it2 != l.end()){
        cout<<"founded"<<endl;
    }else{
        cout<<" not founded "<<endl;
    }
    //traversing
    for(auto it = l.begin() ; it != l.end() ; it++){
        cout<<*it<<" <-> ";
    }
    cout<<endl;
    //delete 
    l.pop_back();
    for(auto it = l.begin() ; it != l.end() ; it++){
        cout<<*it<<" <-> ";
    }
    cout<<endl;
    l.pop_front();
    for(auto it = l.begin() ; it != l.end() ; it++){
        cout<<*it<<" <-> ";
    }
    cout<<endl;

    l.push_back(120);
    l.push_back(300);
    l.push_back(700);
    for(auto it = l.begin() ; it != l.end() ; it++){
        cout<<*it<<" <-> ";
    }
    cout<<endl;
    auto it3 =l.begin();
    advance(it3 , 2);
    l.erase(it3);
    for(auto it = l.begin() ; it != l.end() ; it++){
        cout<<*it<<" <-> ";
    }
    cout<<endl;



}