
#include <iostream>
using namespace std;
int main (){
    int arr[6] = {1,2,3,4,5,6};
    cout<<"Array elements * 3 : \n";
    for(int i=0; i<=5; i++){
        cout<<arr[i]*3<<" ";
    }

    cout<<"Reverse of array *3: \n";
    for(int i=5; i>=0; i--){            //reverse print
        cout<<arr[i]*3<<" ";
    }
    return 0;

}