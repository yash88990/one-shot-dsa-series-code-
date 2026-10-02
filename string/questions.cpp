// 1. Find the Length of a String

// #include <iostream>
// using namespace std;
// int main(){
//     string s = "hello world";
//     //method 1 
//     int size = s.size();
//     cout<<size<<endl;
//     //method 2 
//     int size2 = s.length();
//     cout<<size2<<endl;
//     //method 3 
//     int cnt = 0;
//     for(char ch : s)cnt++;
//     cout<<cnt<<endl;
//     return 0 ;
// }




// // 2. Count Vowels, Consonants, Digits, Spaces and Special Characters

// #include <iostream>
// using namespace std;
// int main(){
//     string s = "hello  1 2 3 #@asfgf wrfg obhsc";
//     int consonent = 0;
//     int vowel = 0;
//     int space = 0 ;
//     int digit = 0 ;
//     int special=0;
//     for(char ch : s){
//         if(isalpha(ch)){
//             ch= tolower(ch);
//             if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
//                 vowel++;
//             }else{
//                 consonent++;
//             }
//         }else if(isdigit(ch))digit++;
//         else if(isspace(ch))space++;
//         else special++;
//     }
//     cout<<"vowel is "<<vowel<<endl;
//     cout<<"consonent is "<<consonent<<endl;
//     cout<<"digit is "<<digit<<endl;
//     cout<<"space is "<<space<<endl;
//     cout<<"special character is "<<special<<endl;
//     cout<<s.size()<<endl;
//     return 0 ;
// }




// //  3. Count Frequency of Every Character

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     string s = "welcome to logicnlearn DSA classes";
//     vector<int>vis(s.size() , 0);
//     for(int i = 0 ; i < s.size() ; i++){
//         int cnt = 0;
//         for(int j = i ; j < s.size() ; j++){
//             if(s[i] == s[j] && vis[j] == 0){
//                 cnt++;
//                 vis[j] = 1;
//             }
//         }
//         if(cnt > 0)
//             cout<<s[i]<<" -> "<<cnt<<endl;
//     }
// }





















// // 4. Find Frequency of a Given Character

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     string s = "welcome to logicnlearn DSA classes";
//     int ch ='c';
//     int count = 0;
//     for(int i = 0 ; i < s.size() ; i++){
//         if(s[i] == ch)count++;
//     }
//     cout<<"count is "<<count<<endl;
// }




// // 5. Reverse a String

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     string s = "welcome to logicnlearn DSA classes";
//     //method 1 
//     for(int i = s.size() -1 ; i>= 0 ; i--){
//         cout<<s[i];
//     }
//     cout<<endl;
//     //method 2 
//     string ans="";
//     for(int i = s.size() ; i>= 0 ; i--){
//         ans += s[i];
//     }
//     cout<<ans<<endl;

//     //method 3 
//     reverse(s.begin() , s.end());
//     cout<<s<<endl;
//     //method 4 
//     int start = 0 , end = s.size()-1;
//     while(start < end){
//         swap(s[start++] , s[end--]);
//     }
//     cout<<s<<endl;
    
// }




// //  6. Check Whether a String is Palindrome

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main(){
    
    // //method 1 
    // string s = "mada";
    // string originalstr = s;
    // reverse(s.begin() , s.end());
    // if(originalstr == s)cout<<"palindrome"<<endl;
    // else cout<<"not a palindrome"<<endl;

    // //method 2
    // string s = "madam"; 
    // int start = 0 , end = s.size() - 1;
    // bool palindomehai = true;
    // while(start < end){
    //     if(s[start] != s[end]){
    //         palindomehai = false;
    //         break;
    //     }
    //     start++;
    //     end--;
    // }
    // if(palindomehai)cout<<"palindrome"<<endl;
    // else cout<<"not a palindrome"<<endl;

// }







// 7. Convert Lowercase to Uppercase

// #include <iostream>
// using namespace std;
// int main(){
//     string s = "hello ,world12345";
//     cout<<s<<endl;
    
//     for(char ch : s){
//         if(isalpha(ch)){
//             char cc = toupper(ch);
//             cout<<cc;
//         }else
//             cout<<ch;
        
//     }
// }








// // 8. Convert Uppercase to Lowercase

// #include <iostream>
// using namespace std;
// int main(){
//     string s = "HELLO ,world12345";
//     cout<<s<<endl;
    
//     for(char ch : s){
//         if(isalpha(ch)){
//             char cc = tolower(ch);
//             cout<<cc;
//         }else
//             cout<<ch;
        
//     }
// }




// 9. Count Words in a String

// #include <iostream>
// #include <sstream>
// using namespace std;
// int main(){
//     string s = "i love programming";
//     string word;
//     stringstream ss(s);
//     int count = 0;
//     while(ss >> word){
//         // cout<<word<<endl;
//         count++;
//     }
//     cout<<"no. of words is "<<count<<endl;

// }




















// 10. Remove All Spaces from a String

// #include <iostream>
// #include <sstream>
// using namespace std;
// int main(){
//     string s = "i love programming";
    //// method 1 

    // string word;
    // stringstream ss(s);
    // string ans ="";
    // while(ss >> word){
    //     ans += word;
    // }
    // cout<<ans<<endl;

    //method 2 
    // string ans = " ";
    // for(char ch : s){
    //     if(ch == ' ')continue;
    //     else ans += ch;
    // }
    // cout<<ans<<endl;
// }














// // 11. Check Whether Two Strings are Anagrams

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main(){
//     string s1 = "hello";
//     string s2 = "elhlO";
//     sort(s1.begin() , s1.end());
//     sort(s2.begin() , s2.end());
//     if(s1 == s2)cout<<"anagrams"<<endl;
//     else cout<<"not an anagrams"<<endl;
// }














// 12. Find the First Non-Repeating Character

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     string s = "welcome to logicnlearn DSA classes";
//     vector<int>vis(s.size() , 0);
//     for(int i = 0 ; i < s.size() ; i++){
//         int cnt = 0;
//         for(int j = i ; j < s.size() ; j++){
//             if(s[i] == s[j] && vis[j] == 0){
//                 cnt++;
//                 vis[j] = 1;
//             }
//         }
//         if(cnt == 1 )
//             cout<<s[i]<<" -> "<<cnt<<endl;
//             break;
//     }
// }










// // 13. Find the First Repeating Character
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     string s = "welcome to logicnlearn DSA classes";
//     vector<int>vis(s.size() , 0);
//     for(int i = 0 ; i < s.size() ; i++){
//         int cnt = 0;
//         for(int j = i ; j < s.size() ; j++){
//             if(s[i] == s[j] && vis[j] == 0){
//                 cnt++;
//                 vis[j] = 1;
//             }
//         }
//         if(cnt > 1){
//             cout<<s[i]<<" -> "<<cnt<<endl;
//             break;
//         }
            
//     }
// }






// // 14. Remove Duplicate Characters

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     string s = "welcome to logicnlearn DSA classes";
//     vector<int>vis(s.size() , 0);
//     string ans = "";
//     for(int i = 0 ; i < s.size() ; i++){
//         int cnt = 0;
//         for(int j = i ; j < s.size() ; j++){
//             if(s[i] == s[j] && vis[j] == 0){
//                 cnt++;
//                 vis[j] = 1;
//             }
//         }
//         if(cnt > 0)
//         ans += s[i];
            
//     }
//     cout<<ans<<endl;
// }














// // 15. Find the Character with Maximum Frequency

// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;
// int main(){
//     string s = "welcome to logicnlearn DSA classes";
//     vector<int>vis(s.size() , 0);
//     int maxcount = INT_MIN;
//     char ans = ' ';
//     for(int i = 0 ; i < s.size() ; i++){
//         int cnt = 0;
//         for(int j = i ; j < s.size() ; j++){
//             if(s[i] == s[j] && vis[j] == 0){
//                 cnt++;
//                 vis[j] = 1;
//             }
//         }
//         maxcount = max(maxcount , cnt);
//         if(cnt > maxcount)
//             maxcount = cnt;
//             ans = s[i];
//     }
//     cout<<ans<<" -> "<< maxcount<<endl;
// }















// // 16. Check Whether One String is a Substring of Another

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     string s = "welcome to logicnlearn DSA classes";
//     string s2 = "welcome1";
//     if(s.find(s2) == string::npos)cout<<"not present";
//     else cout<<"present";
// }






















// // 17. Replace a Character in a String

// #include <iostream>
// using namespace std;
// int main(){
//     string s = "hello hii how are you ?";
//     for(int i = 0 ; i < s.size() ; i++){
//         if(s[i] == 'h'){
//             s[i] = 'H';
//         }
//     }
//     cout<<s<<endl;
// }













// // 18. Remove a Particular Character

// #include <iostream>
// using namespace std;
// int main(){
//     string s = "hello hii how are you ?";
//     for(int i = 0 ; i < s.size() ; i++){
//         if(s[i] == 'h'){
//             s.erase(i,1);
           
//         }
//     }
//     cout<<s<<endl;
// }










// // 19. Find the Longest Word in a Sentence

// #include <iostream>
// #include <sstream>
// #include <climits>
// using namespace std;
// int main(){
//     string s = "hello welcome to logicnlearn  LIVE DSA classes ";
//     string word;
//     stringstream ss(s);
//     int maxi = INT_MIN;
//     while(ss >> word){
//         int l = word.length();
//         maxi = max(maxi , l);
//     }
//     cout<<maxi<<endl;
// }
















// 20. Reverse Every Word in a Sentence

// #include <iostream>
// #include <sstream>
// #include <climits>
// #include <algorithm>
// using namespace std;
// int main(){
//     string s = "hello welcome to logicnlearn  LIVE DSA classes ";
//     string word;
//     stringstream ss(s);
//     cout<<s<<endl;
//     string ans = "";
//     while(ss >> word){
//         reverse(word.begin() , word.end());
//         ans += word + " ";
//     }
//     cout<<ans<<endl;
// }










// // 21. Find the Shortest Word in a Sentence

// #include <iostream>
// #include <sstream>
// #include <climits>
// using namespace std;
// int main(){
//     string s = "hello welcome to logicnlearn  LIVE DSA classes ";
//     string word;
//     stringstream ss(s);
//     int maxi = INT_MAX;
//     while(ss >> word){
//         int l = word.length();
//         maxi = min(maxi , l);
//     }
//     cout<<maxi<<endl;
// }



// // 22. Check if Two Strings are Equal Without Using `==`

// #include <iostream>
// using namespace std;
// int main(){
//     string s1 = "helloworld";
//     string s2 = "worldhello";
//     int n1 = s1.size();
//     int n2 = s2.size();
//     if(n1 != n2){
//         cout<<"not equal"<<endl;
//         return 0;
//     }
//     int index = s1.find(s2);
//     cout<<index<<endl;
//     if( index == 0)cout<<"equal hai";
//     else cout<<"equal nahi hai";
// }









// // 23. Remove Duplicate Words from a Sentence
// #include <iostream>
// #include <vector>
// #include <sstream>
// using namespace std;
// int main(){
//     string s = "hello hii welcome hello ";
//     string word;
//     stringstream ss(s);
//     vector<string> ans;
//     while(ss >> word){
//             bool flag = false;
//             for(auto x : ans){
//                 if(x == word){
//                     flag= true;
//                     break;
//                 }
//             }
//             if(flag == false)ans.push_back(word);
//     }
//     for(auto i : ans)cout<<i<<" ";
// }







// // 24. Find the Most Frequent Word in a Sentence

// #include <iostream>
// #include <vector>
// #include <sstream>
// #include <algorithm>
// #include <climits>
// using namespace std;
// int main(){
//     string s = "hello hii welcome hello ";
//     string word;
//     stringstream ss(s);
//     vector<string> ans;
//     while(ss >> word){
//         ans.push_back(word);
//     }
//     sort(ans.begin() , ans.end());
//     string w = "";
//     int maxcount = INT_MIN;
//     for(int i = 1 ; i < ans.size() ; i++){
//         int count = 0;
//         for(int j = i ; j < ans.size() ; j++){
//             if(ans[i] == ans[j]){
//                 count++;
//             }
//         }
//         if(count > maxcount){
//             maxcount = count ;
//             w = ans[i];
//         }
//     }
//     cout<<endl<<endl;
//     cout<<w<<endl;
// }










// // 25. Check if a String Contains Only Digits
// #include <iostream>
// using namespace std;
// int main(){
//     string s = "123456a";
//     bool flag = true;
//     for(char ch : s){
//         if(!isdigit(ch)){
//             flag = false;
//         }
//     }
//     if(flag)cout<<"all r digits"<<endl;
//     else cout<<"not all r digits"<<endl;
// }