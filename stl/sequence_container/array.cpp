#include<iostream>
#include <array>
using namespace std;
int main(){
    array<int,5> arr1={11,22,33};
    array<int,5> arr2={1,2,3,4,5};
    //size of array
    int size = arr2.size();
    cout<<size<<endl;
    //access
    cout<<arr2[30]<<endl;
    cout<<arr2.at(3)<<endl;
    // first element 
    cout<<arr2.front()<<endl;
    //last element
    cout<<arr2.back()<<endl;
    //swap  -> both arrays must have same size 
    cout<<"........before swapping ......."<<endl;
    for(int ele : arr1)cout<<ele<<" ";
    cout<<endl;
    for(int ele : arr2)cout<<ele<<" ";
    cout<<endl;
    arr1.swap(arr2);
    cout<<"........after swapping ......."<<endl;
    for(int ele : arr1)cout<<ele<<" ";
    cout<<endl;
    for(int ele : arr2)cout<<ele<<" ";
    cout<<endl;
    //empty
    cout<<arr1.empty()<<endl;
    // fill
    array<int,5>arr3;
    for(int ele : arr3)cout<<ele<<" ";
    cout<<endl;
    arr3.fill(10);
    for(int ele : arr3)cout<<ele<<" ";
    cout<<endl;

    array<int,5> arr4 = {6};
    for(int ele : arr4)cout<<ele<<" ";
    cout<<endl;
    arr4.fill(90);
    for(int ele : arr4)cout<<ele<<" ";
    cout<<endl;

    return 0;
}