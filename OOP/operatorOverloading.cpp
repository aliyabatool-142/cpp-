#include <iostream>
using namespace std;
class Add{
    int x;

public:
    void setData(){
        cout<<"Enter a number: ";
        cin>>x;
    }

    void display(){
        cout<<"The number is: "<<x<<endl;
    }
    Add operator +(Add a2){
        Add a3;
        a3.x = x + a2.x;
        return a3;
    }
};
int main(){
    Add a1, a2, a3;
    a1.setData();
    a2.setData();
    a3 = a1 + a2;
    a3.display();
    return 0;

}