#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    
    int* ptr;
    int* ptr2;
    cout<<ptr<<endl;
    cout<<ptr2<<endl;
    cout<<ptr - 2<<endl;
    cout<<ptr-ptr2<<endl;

    return 0;
}