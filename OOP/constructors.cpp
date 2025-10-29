#include <iostream>
#include <string>
using namespace std;
class Teacher{
private:
    double salary;      //data hiding
public:
    string name;
    string dept;
    string subject;

    //non-parameterized constructor
    Teacher(){
        dept = "Computer Science";
    }

    //parameterized constructor
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;  //'this' pointer shows that the 'name' on the left is a property of object 
        this-> dept= dept;
        this->subject = subject;
        this->salary = salary;
    }
    //copy constructor
    Teacher (Teacher &orjobj){      //default constructor will not get called when we make a custom copy constructor
        cout<<"I am custom copy constructor"<<endl;
        this->name = orjobj.name;  
        this-> dept= orjobj.dept;
        this->subject = orjobj.subject;
        this->salary = orjobj.salary;
    }

    
    //methods or member functions
    void changedept(string newDept){
        dept = newDept;
    }

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"department: "<<dept<<endl;
        cout<<"subject: "<<subject<<endl;
        cout<<"salary: "<<salary<<endl;
    }

};

int main(){
    Teacher t1("Aliya", "CS", "Cpp", 34000);     //constructor call
    t1.getInfo();

    Teacher t2(t1);     //default copy constructor -invoke or called
    t2.getInfo();

     Teacher t3 = t1;     //default copy constructor -invoke or called
    t3.getInfo();
}

/*in this code we have two constructors of same name (Teacher), but we
won't get an error, because the compiler will automatically detect that
have sent four values and we know their types, so the parametric 
constructor will get called.
This phenomena of having different types of constructors of same name, is
called constructor overloading (it is an example of polymorphism)*/