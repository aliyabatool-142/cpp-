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
    Cricketer c1("Virat", 25000, 55.2);   //name , runs and avg are stored in c1 object
    Cricketer* c2 = new Cricketer("Rohit", 18000, 47.8);    //we haven't created a c2 variable directly, but a c2 pointer which store the adress of c2 objrect
    
    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2->name<<" "<<c2->runs<<endl;

    return 0;
}