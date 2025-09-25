#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[4][3] = {{2,3,4},{5,6,7},{8,9,0},{1,12,22}};
     int mn = INT_MAX;
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){           
            mn = min(mn,arr[i][j]);
        }
    }
    cout<<mn;
}