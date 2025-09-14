#include <iostream>
using namespace std;
int main(){
   /* int arr[4] = {3,6,8,3};
    int sum=0;
    for(int i=0; i<=3; i++){
        sum +=arr[i];
    }
    cout<<sum;*/

    int arr[4] = {3,6,8,3};
    int n = sizeof(arr)/sizeof(arr[0]);         //or =sizeof(arr)/4
        int sum=0;
    for(int i=0; i<n; i++){
        sum +=arr[i];
    }
    cout<<sum;
}