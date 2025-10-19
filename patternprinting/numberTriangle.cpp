/*#include <iostream>
using namespace std;
int main (){

    int n ;
    cout<<"Enter the length of triangle ";
    cin>>n;
    for(int i =1 ; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j ;
        }
        cout<<endl;
    }
}*/

/*#include <iostream>
using namespace std;
int main (){

    int n ;
    cout<<"Enter the length of triangle ";
    cin>>n;
    for(int i =1 ; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i ;
        }
        cout<<endl;
    }
}*/

/*#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<n+1-j ;
        }
        cout<<endl;
    }
}*/


//odd no. triangle
#include <iostream>
using namespace std;
int main (){
    int n = 4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j*2-1 <<" ";
        }
        cout<<endl ;
    }
}