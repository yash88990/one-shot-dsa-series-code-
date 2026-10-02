#include<iostream>
using namespace std;

void print(int arr[], int size ){
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    print(arr,5);
    cout<<"after deleting first element"<<endl;
    for (int i = 0 ; i < 4 ; i++){
        arr[i] = arr[i+1];
    }
    arr[-1] = 0;
    print(arr,5);
    
}