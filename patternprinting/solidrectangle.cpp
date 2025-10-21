#include <iostream>
using namespace std;
int main(){

//rows ->m , columns ->n
int m , n;
cout<<"Enter no. of rows ";
cin>>m;

cout<<"Enter no of columna ";
cin>>n;
for(int i = 1 ; i<=m ; i++){
    for(int j =1; j<=n; j++){
        cout<<'*'<<" ";
    }
    cout<<endl;
}
return 0;



}