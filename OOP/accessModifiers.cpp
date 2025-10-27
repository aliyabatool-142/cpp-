#include <iostream>
using namespace std;
class Student{
public:
    string name ;
    int age;

    Student(){
        name = "Aliya";
        age = 20;
        marks =94.1;
    }
    Student(string n, int a, float m){
        name =n;
        age = a;
        marks = m;
    }
    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<marks<<endl;
    }

private:
float marks;

};

int main (){
    Student s1;
    Student("aliya", 30, 91.2);
    s1.display();
    return 0;
}


/*the code is for problems where we don't want the user to change any particular class member but we want user to atleast print it*/

/*access modifiers -> private, public, protected*/
//private -> only within the class
//public -> anywhere
//protected -> within the class and derived class
