
#include <iostream>
using namespace std;
int main(){
    int arr[6] = {2,5,4,67,8,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout <<"Enter array element: "<<endl;
    int m;
    cin>>m ;
    bool found = false;
    for(int i=0; i<n; i++){
        if(m==arr[i]){
            cout<<"Element found at index: "<<i<<endl;
            found = true;
            break;
        }
    }
     if(!found) {
        cout<<"Element not found ";
     }   
    return 0;
}
