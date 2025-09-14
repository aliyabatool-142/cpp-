#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n ;
    int arr[n] ;

    cout<<"Enter " <<n<<" array elements: \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Squares of the elements are:  \n";
    int square;
    for(int i=0; i<n; i++){
        square=arr[i]*arr[i];
        cout<<"Square of "<<arr[i]<<" is "<<square<<endl;
    }
    return 0;
}