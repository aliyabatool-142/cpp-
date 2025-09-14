#include <iostream>
using namespace std;
int main(){
    int marks[6];
    cout<<"Enter marks of students: ";
    int n = sizeof(marks)/4;
    for(int i=0; i<n; i++){
        cin>>marks[i];
    }

    cout<<"Failed students are: "<<endl;
    for(int i=0; i<n; i++){
        if(marks[i]< 33){
            cout<<marks[i]<<endl;
        }
     }
    // cout<<"Roll no. of failed students are: "<<endl;
    // for(int i=0; i<n; i++){
    //     if(marks[i]< 33){
    //         cout<<i<<endl;
    //     }
    //  }
    return 0;
}