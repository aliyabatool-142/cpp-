#include <iostream>
using namespace std;    

void sum(int n, int s){
    if(n==0) {
        cout<<s<<endl; // Print the sum when n reaches 0
        return;
       }   //base case
    sum(n-1 ,s+n);         //recursive call
    return;

}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    sum(n, 0); // Initial call with sum as 0
    return 0;
}