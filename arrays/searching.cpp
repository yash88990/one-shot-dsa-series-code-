#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,88,90};
    // int val = 90;
    // bool milgaya = false;
    // for(int i = 0 ; i < 10 ; i++){
    //     if(arr[i] == val){
    //         milgaya = true;
    //     }
    // }
    // if(milgaya == true){
    //     cout<<"mil gya"<<endl;
    // }else{
    //     cout<<" nahi mila "<<endl;
    // }

    int val = 90;
    bool milgya = false;
    int start = 0 , end = 9;
    while(start <= end){
        int mid = start + ( end - start )/2;
        if(arr[mid] == val){
            milgya = true;
            break;
        }else if(arr[mid] > val){
            end = mid - 1;
        }else{
            start = mid + 1 ;
        }
    }

    if(milgya == true)cout<<"mil gaya "<<endl;
    else cout<<"nahi mila "<<endl;


}