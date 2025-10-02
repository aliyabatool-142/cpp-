#include <iostream>
using namespace std;

struct student{
    string name;
    double gpa;
    bool enrolled;
};

int main(){
    student s1;
    s1.name = "Eren";
    s1.gpa = 3.9;
    s1.enrolled = 1;
    cout<<s1.name<<endl<<s1.gpa<<endl<<s1.enrolled<<endl;

    student s2;
    s2.name = "Levi";
    s2.gpa = 4.0;
    s2.enrolled = 1;
    cout<<s2.name<<endl<<s2.gpa<<endl<<s2.enrolled<<endl;

    student s3;
    s3.name = "Mikasa";
    s3.gpa = 3.95;
    s3.enrolled = 1;
    cout<<s3.name<<endl<<s3.gpa<<endl<<s3.enrolled<<endl;

    return 0;




    /*A structure is a user defined datatype also it is a collection of data type*/

    // struct = a structure that group related variables uunder one name.
    //         struct can contain many different data types(string,int, bool ,double etc)
    //         variables in a struct are known as members.
    //         members can be access with. 'class member access operator'

}