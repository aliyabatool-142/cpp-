#include <iostream> 
using namespace std;
int main(){
    
    int a[3][2] = {{11, 12},{13,14},{15,16}};
    int b[3][2] = {{1,2},{3,4},{5,6}};
    const int row = sizeof(a)/sizeof(a[0]);
    const int col = sizeof(a[0])/sizeof(a[0][0]);
    
    int sum [3][2];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    cout<<"Sum of matrix a and b is: \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}