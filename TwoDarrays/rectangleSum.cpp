/*Given a matrix arr of diamention n x m and 2 coordinates (l1,r1) and (l2,r2)
Return the sum of the rectangle from (l1,r1) to (l2,r2)*/
#include <iostream>
using namespace std;
int main(){
    int arr[5][4] = {{2,3,35,4},{5,6,7,55},{8,9,32,0},{1,12,22,34},{2,3,4,5}};
    int sum = 0;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=2; j++){           
            sum += arr[i][j];
        }
    }
    cout<<sum;
}