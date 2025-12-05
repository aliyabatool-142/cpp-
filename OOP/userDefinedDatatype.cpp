#include <iostream>
#include <string>
using namespace std;
class Teacher{
private:
    double salary;      //data hiding
public:
    //properties or data
    string name;
    string dept;
    
    //methods or member functions
    void changedept(string newDept){
        dept = newDept;
    }
    
    //setter
    void setSalary(double s){
        salary = s;
    }
    //getter
    double getSalary(){
        return salary;
    }

};

int main(){
    Teacher t1;     //constructor call
    t1.name = "Aliya";
    t1.dept = "CS";
    t1.setSalary(34000); 

    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.getSalary()<<endl;
}


