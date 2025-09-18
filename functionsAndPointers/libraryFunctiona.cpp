#include <iostream>
#include <cmath>
using namespace std;
int main (){
    double num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Square root of "<<num<<" = ";
    cout<<sqrt(num)<<endl;

    
    cout<<cbrt(10)<<endl;
    cout<<max(4,8)<<endl;
    cout<<pow(4,2)<<endl;
    cout<<min(224,21)<<endl;
    cout<<abs(-3)<<endl;
    cout<<round(num)<<endl;
    cout<<ceil(num)<<endl;
    cout<<floor(num)<<endl;
    cout<<fmod(10.5,3)<<endl;
    return 0;
}