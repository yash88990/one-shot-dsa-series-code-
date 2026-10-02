#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,6,6,7,8,9};
    auto it = find(v.begin() , v.end(),64);
    if(it != v.end())cout<<"founded"<<endl;
    else cout<<"not available"<<endl;
    int cnt = count(v.begin() , v.end() , 6);
    cout<<"count is "<<cnt<<endl;
    set<int>s1={1,2,3,4,9,0,6,7,4,-4,-5,-7,6,6,6,6,22,2,2};
    s1.insert(4567);
    s1.insert(-4567);
    for(int ele : s1)cout<<ele<<" ";
    cout<<endl;
    unordered_set<int>s2={1,2,3,4};
    s2.insert(234);
    s2.insert(-346);
    for(int ele : s2)cout<<ele<<" ";
    cout<<endl;
    unordered_map<string,int>m={
        {"yash" , 134},
        {"harsh", 5678},
        {"yashika" , 4567}
    };

    if(m.find("yashika singh ") != m.end()){
        cout<<m["yashika singh"]<<endl;
    }else
        cout<<"not available"<<endl;


    unordered_set<string> guestlist={"yash","yashika"};
    for(auto it = guestlist.begin() ; it != guestlist.end() ; it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    if(guestlist.find("ansh") != guestlist.end()){
        cout<<"already invited"<<endl;
    }else{
        guestlist.insert("ansh");
        cout<<"invitation sent"<<endl;
    }

    for(auto it = guestlist.begin() ; it != guestlist.end() ; it++){
        cout<<*it<<" ";
    }
    cout<<endl;


    
}