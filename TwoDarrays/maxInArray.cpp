#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[4][3] = {{2,3,4},{5,6,7},{8,9,0},{1,12,22}};
     int mx = INT_MIN;
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){           
            mx = max(mx,arr[i][j]);
        }
    }
    cout<<mx;
}