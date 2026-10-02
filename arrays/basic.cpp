#include <iostream>
using namespace std;
int main(){
    //declare an array
    int arr[5]={1};
    arr[0] = 5;
    arr[3] = 45;
    for(int i = 0 ; i < 5;i++){
        cout<<"ele at index "<<i<<" ->  " <<arr[i]<<endl;
    }

    for(int i = 0 ; i < 5;i++){
        cout<<"address at index "<<i<<" ->  " <<&arr[i]<<endl;
    }
    int size1 = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of arr is :-> " <<size1<<endl;


    char arr2[10]={'a','c','y','t'};
    for(int i = 0 ; i < 10 ; i++){
        cout<<arr2[i]<<" ";
    }
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    cout<<"size of arr is :-> " <<size2<<endl;
 

    cout<<endl;
    int arr3[] = {1,2,3,4,5,6,7,8,9};
    int size3 = sizeof(arr3)/sizeof(arr3[0]);
    cout<<"size of arr is :-> " <<size3<<endl;
}