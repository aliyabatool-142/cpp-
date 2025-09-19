#include <iostream>
using namespace std;
void india(){
    cout<<"you are in India!"<<endl;
}

void pakistan(){
    cout<<"you are in pakistan!"<<endl;
    india();            //function call , function  in a function
}

int main (){
    cout<<"you are in Main!"<<endl;
    india();                //function call
    pakistan();             //function call

    return 0;              
}