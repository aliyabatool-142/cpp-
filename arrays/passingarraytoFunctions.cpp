#include <iostream>
using namespace std;
void change(int arr[]){        //even if we change the name of array here like(int x) ,
    arr[0] = 10;                //the value will still change
}

int main(){
    int arr[3] = {3,5,6};
    for(int i=0; i<=2; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    change(arr);                //arrays pass by refrence not by value
    for(int i=0; i<=2; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}