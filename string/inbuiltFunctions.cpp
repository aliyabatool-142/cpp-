#include <iostream> 
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
    // //reverse()
    // //build in function with time complexity = O(n)
    // string str = "Aliya";
    // reverse(str.begin(),str.end());
    // cout<<str<<endl;
    
    
    //substr()
    //use to find substring of a string, time complexity=O(n)
    string str = "Aliya";
    cout<<str.substr(0,3)<<endl;            //str.substr(position,length)


    // //+ operator
    // //used to concatenate strings
    // string str1 ="Aliya ";
    // string str2 ="Batool";
    // cout<<str1+str2;

    // //strcat()
    // //used to concatenate char arrays
    // char s1[20] ="Aliya";
    // char s2[20] ="Batool";
    // strcat(s1,s2);
    // cout<<s1;

    // //push_back()
    // string s1 = "abcd";
    // char ch = 'e';
    // s1.push_back(ch);
    // cout<<s1;


    
}
