#include<iostream>
using namespace std;
int main(){
    int student = 5;
    int* ptr = &student;
    float fee = 1000.50;
    float* fptr =&fee;

    cout<<student<<endl;
    cout<<ptr<<endl;
    cout<<fee<<endl;
    cout<<fptr<<endl;

    ptr++;                      //increment in pointer
    cout<<ptr<<endl;
    fptr++;
    cout<<fptr<<endl;

    ptr--;                      //pointer decrement
    cout<<ptr<<endl;
    fptr--;
    cout<<fptr<<endl;
    
    return 0;
}