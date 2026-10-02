// #include <iostream>
// using namespace std;

// void greet(string name){
//     cout<<"hello hi welcome "<<name<<endl;
// }


// int main(){
//     // cout<<"hello hii welcome "<<"yash"<<endl;
//     // cout<<"hello hii welcome "<<"a"<<endl;
//     // cout<<"hello hii welcome "<<"c"<<endl;
//     // cout<<"hello hii welcome "<<"d"<<endl;
//     // cout<<"hello hii welcome "<<"f"<<endl;
//     // cout<<"hello hii welcome "<<"d"<<endl;
//     // cout<<"hello hii welcome "<<"u"<<endl;
//     // cout<<"hello hii welcome "<<"v"<<endl;
//     // cout<<"hello hii welcome "<<"l"<<endl;
//     // cout<<"hello hii welcome "<<"t"<<endl;
//     greet("yash");
//     greet("yashika");
//     greet("harsh");
    

// }



#include <iostream>
using namespace std;

int sum(int &a  ){
    a = a + 5;
    return a;
}

int main(){
    int a = 5;
    cout<<"value of a is : "<<a<<endl;
    cout<<"after function : " << sum(a)<<endl;
    cout<<"value of a is : "<<a<<endl;
}