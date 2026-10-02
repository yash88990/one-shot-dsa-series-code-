// // 1 . print all array elements 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     for(int i = 0 ; i < 5 ; i++){
//         cout<<arr[i]<<" ";
//     }
// }


// // 2 . print all array elements taking input from user
// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"enter size of an array ->  ";
//     cin>>size;
//     int arr[size];
//     cout<<"enter elements ";
//     for(int i = 0 ; i < size ; i++){
//         cin>>arr[i];
//     }
//     for(int i = 0 ; i < size ; i++){
//         cout<<arr[i]<<" ";
//     }
// }


// // 3 . print all array elements in reverse order
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     for(int i = 5 - 1  ; i >= 0 ; i--){
//         cout<<arr[i]<<" ";
//     }
// }



// // 4 . print all array elements 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int count = 0;
//     for(int i : arr){
//         count++;
//     }
//     cout<<"size is "<<count<<endl;
// }




// // 5 . print first ans last elements 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     cout<<arr[0]<<endl;
//     cout<<arr[4]<<endl;
// }



// // 7 . print all even index position  array elements 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size = 5;
//     for(int i = 0 ; i < size ; i++){
//         if(i % 2 == 0 ){
//             cout<<arr[i]<<" ";
//         }
        
//     }
//     //method 2
//     cout<<endl;
//     for(int i = 0 ; i < size ; i += 2){

//         cout<<arr[i]<<" ";

        
//     }
// }





// // 8 . print all odd index position  array elements 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size = 5;
//     for(int i = 0 ; i < size ; i++){
//         if(i % 2 != 0 ){
//             cout<<arr[i]<<" ";
//         }
        
//     }
//     //method 2
//     cout<<endl;
//     for(int i = 1 ; i < size ; i += 2){

//         cout<<arr[i]<<" ";

        
//     }
// }





// // 9 . print mid elements 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int mid = 5 / 2;
//     cout<<arr[mid]<<endl;
// }



// // // 10 . print all array elements 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     for(int i = 0 ; i < 5 ; i++){
//         cout<<arr[i]<<" ";
//     }
// }