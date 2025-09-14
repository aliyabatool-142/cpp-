#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter array elements: ";
    for(int i=0; i<=4; i++){
        cin>>arr[i];
    }
    for(int i=0; i<=4; i++){
        cout<<arr[i]*2<<" ";
    }

    arr[0] = 100;
    cout<<endl;
    for(int i=0; i<=4; i++){
        cout<<arr[i]*2<<" ";
    }

    return 0;
}