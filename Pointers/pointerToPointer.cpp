#include <iostream>
using namespace std;
int main(){
    int a = 20;
    int* ptr = &a;
    int** ptr2 =&ptr;          //pointer storing adress of another pointer

    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<&a<<endl;
    cout<<ptr2<<endl;
    cout<<&ptr<<endl;

    // * is called dereference operator--tells the value of adress
    cout<<*(&a)<<endl;
    cout<<*(ptr)<<endl;  
    cout<<*(&ptr)<<endl;
    cout<<*(ptr2)<<endl;
    cout<<**(ptr2)<<endl;

}