// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for(int ele : arr)cout<<ele<<" ";
//     cout<<endl<<"after copying eleements new array is "<<endl;
//     int newarr[size];
//     for(int i = 0 ; i <size ; i++){
//         newarr[i] = arr[i];
//     }
//     for(int ele : newarr)cout<<ele<<" ";  
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int sum = 0;
//     for(int ele : arr)sum+= ele;
//     int avg = sum / size;
//     for(int ele : arr){
//         if(ele > avg)cout<<ele<<" ";
//     }
    
// }




// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int sum = 0;
//     for(int i = 0 ; i < size ; i++){
//         if(i % 2 != 0 )sum += arr[i];
//     }
//     cout<<sum<<endl;
    
    
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0 ; i< size ; i += 2){
//         cout<<arr[i]<<" ";
//     }
    
// }














// // #include <iostream>
// // using namespace std;
// // int main(){
// //     int arr[]={2,2,4,6,8,0,0,90,890};
// //     int size = sizeof(arr)/sizeof(arr[0]);
// //     bool alleven = true;
// //     for(int ele : arr){
// //         if(ele % 2 != 0){
// //             alleven=false;
// //             break;
// //         }
// //     }
// //     if(alleven)cout<<"all even hai";
// //     else cout<<"all even nahi hai";
// // }







// // #include <iostream>
// // using namespace std;
// // int main(){
// //     int arr[]={11,35,67,907};
// //     int size = sizeof(arr)/sizeof(arr[0]);
// //     bool allodd = true;
// //     for(int ele : arr){
// //         if(ele % 2 == 0){
// //             allodd=false;
// //             break;
// //         }
// //     }
// //     if(allodd)cout<<"all odd hai";
// //     else cout<<"all odd nahi hai";
// // }




// // #include <iostream>
// // using namespace std;
// // int main(){
// //     int arr[]={21,35,0};
// //     int size = sizeof(arr)/sizeof(arr[0]);
// //     bool even = false;
// //     bool odd = false;
// //     for(int ele : arr){
// //         if(ele % 2 == 0)even=true;
// //         else odd=true;
// //     }
// //     if(even && odd)cout<<"mix hai";
// //     else cout<<"mix nahi hai";
// // }






// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {11,12,13,1,2,1,1,3,4,4,5,2,1,0,9,7,5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int vis[size]={0};
//     int last;
//     for(int i = 0 ; i < size ; i++){
//         int cnt = 0;
//         for(int j= 0 ; j < size ; j++){
//             if(arr[i] == arr[j]   && vis[j] == 0){
//                 vis[j]=1;
//                 cnt++;
//             }
//         }
//         if(cnt > 1){
//             last =arr[i];
//         }
        

//     }
//     cout<<last<<endl;

// }



// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int last = arr[n-1];
//     for(int i = n-1 ; i> 0 ; i--){
//         arr[i] = arr[i-1];
//     }
//     arr[0]=last;
//     for(int i : arr)cout<<i<<" ";
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int s = arr[0];
//     for(int i = 0 ; i< n-1; i++){
//         arr[i] = arr[i+1];
//     }
//     arr[n-1]=s;
//     for(int i : arr)cout<<i<<" ";
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i : arr)cout<<i<<" ";
//     cout<<endl;

//     // int s = arr[0];
//     // int e = arr[n-1];
//     swap(arr[0],arr[n-1]);
//     for(int i : arr)cout<<i<<" ";

// }




// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int ele : arr)cout<<ele<<" ";
//     cout<<endl;
//     for(int i = 0 ; i<n -1; i += 2){
//         swap(arr[i],arr[i+1]);
//     }
//     for(int ele : arr)cout<<ele<<" ";
// }




// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int ele : arr)cout<<ele<<" ";
//     cout<<endl;
//     for(int i = 0 ; i<n-1 ; i++){
//         if(i % 2 == 0){
//             //i should be smaller
//             if(arr[i] > arr[i+1]){
//                 swap(arr[i],arr[i+1]);
//             }
//         }else{
//             if(arr[i] < arr[i+1]){
//                 swap(arr[i] , arr[i+1]);
//             }
//         }
//     }
//     for(int ele : arr)cout<<ele<<" ";
// }








// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int mid = (0 + n-1) / 2;
//     int sum = 0 , sum1=0,sum2=0;
//     for(int i = 0 ;i < mid ; i++)sum1 += arr[i];
//     for(int i = mid ; i < n ; i++)sum2 += arr[i];
//     for(int i = 0 ; i < n ; i++)sum += arr[i];
//     cout<<sum<<" "<<sum1<< " "<<sum2<<endl;
// }









#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int s = 0 , e = n-1;
    bool ispalindrome= true;
    while(s <= e ){
        if(arr[s] != arr[e]){
            ispalindrome=false;
            break;
        }else{
            s++;
            e--;
        }
    }
    if(ispalindrome)cout<<"palindrome"<<endl;
    else cout<<"not a palindrome";
}