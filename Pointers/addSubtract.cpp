//in cpp adding two pointers directly is not allowed by we can apply the concept on arrays
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;
    cout<<*(arr+4)<<endl;

    return 0;
}
/*memory adress of arrays are contiguous, increment in array pointer by 1
  will add up 4 in the array adress which will be equal to the next array*/
