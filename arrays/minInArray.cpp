#include <iostream>
#include <climits>
using namespace std;
int main(){
    int m;
    cout<<"Enter number of array elements: \n";  //ask for length of array   
    cin>>m;
    int arr[m];
    cout<<"Enter "<<m<<" array elements: \n";  
    int n = sizeof(arr)/sizeof(arr[0]);          //taking array elements as input using loop
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mn =INT_MAX;                            //initialize minimum with INT_MAX
    int mx =INT_MIN;                             //initialize maximum with INT_MIN
    for (int i=0; i<n; i++){                    //using inbuild functions
        mn = min(mn, arr[i]);
        mx = max(mx ,arr[i]);
    }
    cout<<"The smallest value is: \n"<<mn<<endl;
    cout<<"The largest value is: \n"<<mx<<endl;

    return 0;
    
}