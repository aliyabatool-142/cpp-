#include <iostream>
#include <utility>
using namespace std;
class Move{
public:
    int* data;
    Move(int value){
        data = new int (value);
        cout<<"Constructor called "<<endl;
    }

//move
Move(Move && other)
noexcept{
    data = other.data;
    other.data = nullptr;
    cout<<"Move constructor "<<endl;
}
~Move(){
    delete data;
    cout<<"Destructor called "<<endl;
}

};

int main (){
    Move m1 (10);
    Move m2 = std :: move(m1);
    m1.data;

}