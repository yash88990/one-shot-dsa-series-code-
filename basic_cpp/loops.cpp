#include <iostream>
using namespace std;
int main(){
    // print 1 - 10 
    for(int i = 1 ; i <= 10 ; i++){
        if ( i== 5) continue;
        cout<<i<<" ";
    }
}