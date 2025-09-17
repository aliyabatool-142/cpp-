#include <iostream>
using namespace std;

void india(){
    cout<<"you are in India!"<<endl;
    return;                     //like break
    cout<<"you are in India!"<<endl;

}

void pakistan(){
    cout<<"you are in pakistan!"<<endl;
}

int main (){
    cout<<"you are in Main!"<<endl;
    india();                //function call
    pakistan();             //function call

    return 0;              
}

//necessary to write return 0 in int main when additional functions are made