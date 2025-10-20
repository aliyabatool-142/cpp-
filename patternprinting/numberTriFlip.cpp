/*#include <iostream>
using namespace std;
int main() {
    int n = 4;
    for(int i =1; i<=n; i++){
        for(int j =1; j<=n-i+1; j++){
            cout<<j ;
        }
       cout<<endl;
    }
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main() {
    int n = 4;
    for(int i =1; i<=n; i++){
        for(int j =1; j<=n-i+1; j++){
            cout<<j;
        }
       cout<<endl;
    }
    return 0;
}*/

//odd no. triangle
#include <iostream>
using namespace std;
int main (){
    int n = 7;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j*2-1 <<" ";
        }
        cout<<endl ;
    }
}
