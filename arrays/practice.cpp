#include <iostream>
using namespace std;
int main(){
    // double distance[]= {34.43, 34.55 ,35.6, 75.3};
    // double n = sizeof(distance)/8;
    // for(int i=0; i<n; i++){
    //     cout<<"Distance: "<<distance[i]<<endl;
    // }


    int arr[5];
    cout<<"Enter five integers: ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    cout<<"The values are: "<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}