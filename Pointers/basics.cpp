#include <iostream>
using namespace std;
int main(){
    int x =100;
    int* ptr = &x;
    
    cout<<x<<endl;
    cout<<ptr<<endl;
    x = 200;
    cout<<x<<endl;
    cout<<ptr<<endl;
    cout<<&x<<endl;
    cout<<&ptr<<endl;

    return 0;
}
