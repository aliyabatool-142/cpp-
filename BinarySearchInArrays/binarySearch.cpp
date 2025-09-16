#include <iostream>
using namespace std;
int main(){
    int arr[] = {11, 13, 15 ,17, 19, 21, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter the targeted element: "<<endl;
    cin>>target;
    int low = 0, high = n-1;
    bool found = false;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target) {
            cout<<"Element found at index: "<<mid;
            found = true;
            break;
        }else if(arr[mid]>target){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }

    if(!found){
        cout<<"Element not found. ";
    }
    return 0;
}

