#include <bits/stdc++.h>
using namespace std;
void print(vector<int>v){
    for(int ele : v)cout<<ele<<" ";
    cout<<endl;
}
int main(){
    vector<int>v={1,-2,30,4,5,6};
    //sort -> ascending order 
    sort(v.begin() , v.end());
    print(v);
    // sort -> descending order 
    sort(v.begin(),v.end() , greater<int>());
    print(v);
    //reverse
    reverse(v.begin(),v.end());
    print(v);
    //searching 
    auto it = find(v.begin() , v.end(),65);
    if(it != v.end()){
        cout<<"founded "<<endl;
    }else cout<<"not founded "<<endl;
    //binary search
    if(binary_search(v.begin() , v.end() , 56))cout<<"mil gya"<<endl;
    else cout<<"nahi mila "<<endl;
    //count of a element
    int cnt = count(v.begin() ,v.end() , 6);
    cout<<"6 occurs -> "<<cnt<<" times"<<endl;

    //maximum 
    int maxi = *max_element(v.begin() , v.end());
    int mini = *min_element(v.begin() , v.end());
    cout<<mini <<"   "<<maxi<<endl;
    //upperbound 
    auto it2 = lower_bound(v.begin() , v.end() , 8);
    cout<<*it2<<endl;
    auto it3 = upper_bound(v.begin() , v.end() , 0);
    cout<<*it3<<endl;
    //swap
    int a = 5;
    int b = 7;
    cout<<"before swapping  a is "<<a<<" and b is "<<b<<endl;
    swap(a,b);
    cout<<"after swapping  a is "<<a<<" and b is "<<b<<endl;
    //sum of arrays element 
    int sum = accumulate(v.begin() , v.end() , 0);
    cout<<sum<<endl;



}