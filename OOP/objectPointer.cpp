#include <iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs, float avg){
        this->name = name;
         this->runs = runs;
         this->avg = avg;
    }
};
void change(Cricketer* c){
    (*c).avg = 60.4;
     c->avg = 70.4; // this is also valid

}

int main(){
    Cricketer c1("Virat", 25000, 55.2);
    Cricketer c2("Rohit", 18000, 47.8);

    Cricketer* ptr1 = &c1;
    cout<<(*ptr1).name<<endl;       //bracket is must
    cout<<ptr1->name<<endl;         //arrow operator is also valid
    cout<<(*ptr1).runs<<endl;
    cout<<(*ptr1).avg<<endl;
    (*ptr1).avg = 40;
    cout<<(*ptr1).avg<<endl;
    cout<<c1.avg<<endl;
    change(&c1);
    cout<<c1.avg<<endl;

    return 0;
}