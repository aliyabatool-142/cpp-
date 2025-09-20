#include <iostream>
using namespace std;

int sum(int a, int b){     
    return a+b;
}

int main(){
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"The sum is: ";
    
    cout<<sum(num1,num2);             //functions are of diff return types
}

/*any return type other than void can be stored, print (because its a value) ,
return type void can only be called*/
//return type can be int, bool, float etc
