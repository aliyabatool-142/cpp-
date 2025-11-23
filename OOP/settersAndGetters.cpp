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
   //setter
    void setMarks(float m){
        marks = m;
    }
   //getter
    float getMarks(){
        return marks;
    }
  private:
  float marks;
};
int main (){
    Student s1;
    Student("aliya", 30, 91.2);
    cout <<"name = "<<s1.name<<endl;
    cout<<"age = "<<s1.age<<endl;
    cout<<"marks = "<<s1.getMarks()<<endl;
    s1.setMarks(95.6);
    cout<<"marks = "<<s1.getMarks();
    return 0;
}