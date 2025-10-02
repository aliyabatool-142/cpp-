#include <iostream>
using namespace std;

struct car{
    string modle;
    int year;
    string color;
};

void printcar(car vehicle){
    cout<<vehicle.modle<<endl;
    cout<<vehicle.year<<endl;
    cout<<vehicle.color<<endl;
}
int main(){
    car c1;
    car c2;

    c1.modle = "Mustang";
    c1.year = 2020;
    c1.color = "Red";

    c2.modle = "BMW";
    c2.year = 2024;
    c2.color = "Black";

    printcar(c1);
    printcar(c2);
    return 0;
}