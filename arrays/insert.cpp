#include<iostream>
using namespace std;
int main(){
    int arr[10]={10,25,30,46,5};
    for(int i = 0 ; i < 10 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"after insertion "<<endl;
    int ele = 100;
    for(int i = 9 ; i > 0  ; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = ele;
    for(int i = 0 ; i < 10 ; i++){
        cout<<arr[i]<<" ";
    }


    cout<<endl<<"insertion at any position "<<endl;
    int pos = 3;
    int val = 33;
    for(int i = 9 ; i > pos ; i--){
        arr[i] = arr[i-1];
    }
    arr[pos]=val;
    for(int i = 0 ; i < 10 ; i++){
        cout<<arr[i]<<" ";
    }
}