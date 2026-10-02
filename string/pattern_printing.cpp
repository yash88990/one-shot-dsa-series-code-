#include<iostream>
using namespace std;
int main(){
    int n = 3;
    
    
    for(int i= 1; i <= n  ; i++){
        char ch = 'A';
        //space
        for(int j = 1 ; j <= (n-i) ;j++)cout<<" ";
        //star
        for(int j = 1 ; j <= i ; j++)cout<<ch++;
        ch -= 2;
        //star
        for(int j = 2 ; j <= i ; j++)cout<<ch--;

    
        
        cout<<endl;
    }
    
}