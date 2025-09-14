#include <iostream>
#include <climits>
using namespace std;
int main(){
    //array declaration and initializatoin
    int arr[] = {5,2,9,1,7};
    int n = sizeof(arr)/4;
    //using inbuild MIN and MAX functions
    int mx =INT_MIN;
    int mn =INT_MAX;
    //traversing through array
    for(int i=0; i<n; i++){
        mx = max(mx,arr[i]);
        mn = min(mn,arr[i]);
    }
    //display output
    cout<<"Maximum value in array is: \n";
    cout<<mx<<endl;
    cout<<"Minimum value in array is: \n";
    cout<<mn;

}
