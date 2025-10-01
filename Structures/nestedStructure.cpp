#include <iostream>
using namespace std;

struct Date{
    int day;
    int month; 
    int year;
};
struct student{
    string name;
    int rollNumber;
    Date dob;
};
int main(){
    student s1;
    s1.name = "Aliya";
    s1.rollNumber = 67;
    s1.dob.day = 4;
    s1.dob.month = 4;
    s1.dob.year = 2004;
    cout<<"Student details: \n";
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Roll number: "<<s1.rollNumber<<endl;
    cout<<"Date of birth: "<<s1.dob.day<<"/"<<s1.dob.month<<"/"<<s1.dob.year<<"/"<<endl;
    return 0;
    
}