#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print(vector<int>arr){
    for(int num : arr)cout<<num<< " ";
    cout<<endl;
}
int main(){
    // //declare and initialize
    vector<int>v2={1,2,3,4,5,6,7,8,9,10};
    //size 
    int size = v2.size();
    //access / traverse
    for(int i = 0 ; i <size ; i++ )cout<<v2[i]<<" ";
    cout<<endl;
    for(int ele : v2)cout<<ele<<" ";
    cout<<endl;
    //insert values 
         // at end 
        v2.push_back(100);
        for(int ele : v2)cout<<ele<<" ";
    cout<<endl;
        // at start or at any pos 
        v2.insert(v2.begin() + 0 , 20);
        for(int ele : v2)cout<<ele<<" ";
    cout<<endl;
    //access and update 
    cout<<v2[3]<<endl;
    v2[3] = 150;
    cout<<v2.at(3)<<endl;
    //delete element
        // delete last element
        v2.pop_back();
        print(v2);
        // delete given value
        v2.erase(find(v2.begin(),v2.end() , 5));
        print(v2);
        //delete at pos
        v2.erase(v2.begin() + 1);
        print(v2);
    //empty or not 
    cout<<v2.empty()<<endl;

}