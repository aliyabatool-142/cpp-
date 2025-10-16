/*#include <iostream>
using namespace std;
int main() {
    int n = 4;
    for(int i =1; i<=n; i++){
        for(int j =1; j<=i; j++){
            cout<<(char)(j + 64);
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
        for(int j =1; j<=i; j++){
            cout<<(char)(i + 96);
        }
       cout<<endl;
    }
    return 0;
}*/

#include <iostream>
using namespace std;
int main(){
    int n =5;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<(char)(j*2-1 +64);
        }
        cout<<endl;
    }
}