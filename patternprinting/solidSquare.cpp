#include <iostream>
using namespace std;
int main(){

//rows ->n , columns ->n
int n;
cout<<"Enter side of squarer" ;
cin>>n;
for(int i = 0 ; i<n ; i++){
    for(int j =0; j<n; j++){
        cout<<"* ";
    }
    cout<<endl;
}

}