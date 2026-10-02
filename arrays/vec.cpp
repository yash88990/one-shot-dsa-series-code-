#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector<int> v;
    // v.push_back(10);
    // v.push_back(12);
    // v.push_back(23);
    // v.push_back(45);
    // cout<<v.size()<<endl;

    vector<int>v(5);
    v.push_back(10);
    v.push_back(12);
    v.push_back(23);
    v.push_back(45);
    v.push_back(100);
    v.push_back(10000);
    v.pop_back();

    for(int i = 0 ; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<"after inserting "<<endl;
    v.insert(v.begin() + 0 , 67);
    v.erase(v.begin() + 6);
    for(int i = 0 ; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}