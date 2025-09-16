// Given a sorted arrayof elements and a target x. Find the first occurance
// of x in the array . If x doesnot exist return -1.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,1,2,2,3,4,5,5,5,6,8,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter the targeted value: \n";
    cin>>target;
    int low = 0, high = n-1;
    bool found = false;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            if(mid>0 && arr[mid-1] == target){
            high = mid-1;
                }else{
                cout<<"Element found at index: "<<mid;
                found = true;
                break;
                }
        }else if (arr[mid] > target){
            high = mid-1;
        }else{
            low = mid+1;
        }

    }

    if(found !=true){
        cout<<"Element not found.";
    }

    return 0;

}