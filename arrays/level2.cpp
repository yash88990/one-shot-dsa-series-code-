#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,-5,-6,-2,-5,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    int evencount = 0 , oddcount = 0 , poscount = 0 , negcount = 0 , zerocount = 0;
    for(int ele : arr){
        if(ele % 2 == 0 )evencount++;
        if(ele % 2  != 0 )oddcount++;
        if(ele > 0)poscount++;
        if(ele < 0)negcount++;
        if(ele == 0)zerocount++;
    }
    cout<<evencount<<endl;
    cout<<oddcount<<endl<<poscount<<endl<<negcount<<endl<<zerocount<<endl;

    int largest=arr[0];
    int secondlargest=arr[0];
    for(int ele : arr){
        if(ele > largest)largest=ele;
    }

    for(int ele : arr){
        if((ele > secondlargest) && (ele < largest))
            secondlargest=ele;
    }
    cout<<"largest is "<<largest<<endl;
    cout<<"second largest is "<<secondlargest<<endl;




    int smallest=arr[0];
    int secondsmallest=arr[0];
    for(int ele : arr){
        if(ele < smallest)smallest=ele;
    }

    for(int ele : arr){
        if((ele < secondsmallest) && (ele > smallest))
            secondsmallest=ele;
    }
    cout<<"smallest is "<<smallest<<endl;
    cout<<"second smallest is "<<secondsmallest<<endl;


    bool sortedhai= true;
    for(int i = 0 ; i < size ; i++){
        if(arr[i] > arr[i+1]){
            sortedhai= false;
            break;
        }
    }
    if(sortedhai)cout<<"sorted hai"<<endl;
    else cout<<"sorted nahi hai"<<endl;


    int mini = arr[0];
    int maxi = arr[0];
    for(int ele : arr){
        if(ele > maxi)maxi = ele;
        if(ele < mini)mini=ele;
    }
    int diff = maxi - mini;
    cout<<"diff is "<<maxi <<" - "<< mini <<" == "<<diff<<endl;

    for(int i : arr)cout<<i<<" ";
    cout<<endl<<"after replacing"<<endl;
    for(int i = 0 ; i < size ; i++){
        if(arr[i] < 0)arr[i] = 0;
    }
    for(int ele : arr)cout<<ele<<" ";


}