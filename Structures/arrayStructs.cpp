#include <iostream>
using namespace std;
struct student{
    string name;
    int rollNumber;
    float gpa;
};
int main(){
    //array declaration
    student stud[4];
    int n = sizeof(stud)/sizeof(stud[0]);

    //taking input using loop
    for(int i=0; i<n; i++){                         
        cout<<"Enter details of student "<<i+1<<endl;
        cout<<"Name: \n";
        cin>>stud[i].name;
        cout<<"Enter roll number: \n";
        cin>>stud[i].rollNumber;
        cout<<"Enter gpa: \n";
        cin>>stud[i].gpa;
        cout<<endl;

    }
    //Displaying the list using loop
    cout<<"Details of Students: \n";
    for(int i=0; i<n; i++){
        cout<<"Student "<<i+1<<endl;
        cout<<"Name: "<<stud[i].name<<endl;
        cout<<"Roll number: "<<stud[i].rollNumber<<endl;
        cout<<"GPA: "<<stud[i].gpa<<endl;
    }

    return 0;
}