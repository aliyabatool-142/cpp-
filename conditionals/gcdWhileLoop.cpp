#include <iostream> 
using namespace std;
int main(){
    int n = 48;
    int m = 18;
    while (m!= n){
        if (m>n){
            m = m-n;
        }
        else {
            n = n-m;
        }
    }
    cout << "GCD is: " << n << endl;
    return 0;
}