/*in cpp name of array (arr) is a specific variable of type pointer that
  always points the 0th index element*/
#include <iostream>
using namespace std;
int main(){
    int arr[5] = {23, 34, 55, 46, 35 };
    cout<<arr<<endl;
    cout<<*arr<<endl;

    return 0;
}