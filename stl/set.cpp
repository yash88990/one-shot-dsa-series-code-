#include <iostream>
#include <set>
using namespace std;
void print(set<int>s){
    for(int ele : s)cout<<ele<<" ";
    cout<<endl;
}
int main(){
    set<int>s = {1,1,2,2,3,4,56,7,8,9,0,0,0,-5,-6,8,-7};
    print(s);
    s.insert(10);
    s.insert(10);
    print(s);
    //searching 
    auto it = s.find(27);
    if(it != s.end()){
        cout<<"mil gya "<<endl;
    }else{
        cout<<"nahi mila "<<endl;
    }
    //traverse
    for(auto it = s.begin() ; it != s.end() ; it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    //delete 
    s.erase(0);
    print(s);
    s.erase(s.begin());
    print(s);
   
}