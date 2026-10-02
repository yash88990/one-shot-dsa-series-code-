#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,string>m = {
        {1,"hello"},
        {2,"world"},
        {3,"Hello"}
    };

    // //traverse 
    // for ( auto & ele : m){
    //     cout<<ele.first <<" "<<ele.second<<endl;

    // }
    //inserting 
    m.insert({0,"logicnlearn"});
    //traverse 
    for ( auto & ele : m){
        cout<<ele.first <<" "<<ele.second<<endl;

    }
    //access
    cout<<m[3]<<endl;
    cout<<m.at(1)<<endl;

    //update
    m[1] = "welcome to logicnlearn dsa class";
    cout<<m[1]<<endl;
    //search
    auto it = m.find(3);
    if(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
    }else{
        cout<<"not founded "<<endl;
    }
    //delete 
    m.erase(3);
    //traverse 
    for ( auto & ele : m){
        cout<<ele.first <<" "<<ele.second<<endl;

    }
}
