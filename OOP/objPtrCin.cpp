#include <iostream>
using namespace std;

class Serialkiller{
private:
    string wayOfkilling;

public:
    string name;
    int noOfvictims;
    float wantedLevel;

    //setter
    void setWayOfkilling(string wayOfkilling){
        this->wayOfkilling = wayOfkilling;
    }

    //getter
    void getWayOfkilling(){
        cout<<"Way of Killing : "<<wayOfkilling<<endl;
    }

    Serialkiller(string name, int noOfvictims, float wantedLevel){
        this->name = name;
        this->noOfvictims = noOfvictims;
        this->wantedLevel = wantedLevel;

    }

    void displayDetails(Serialkiller* sk){
        cout<<"Name : "<<(*sk).name<<endl;  //sk->name is also valid
        cout<<"Number of Victims : "<<sk->noOfvictims<<endl;
        cout<<"Wanted Level : "<<sk->wantedLevel<<endl;
    }

    ~Serialkiller(){
    
    }
};

int main(){
    string name;
    string wayOfkilling;
    int noOfvictims;
    float wantedLevel;

    cout<<"Enter details of serial killer :\n";
    cout<<"Name: ";
    getline(cin, name);
    cout<<"Numberof victims: ";
    cin>> noOfvictims;
    cout<<"Wanted level: ";
    cin>> wantedLevel;
    cin.ignore(); // to ignore the newline character left in the buffer
    cout<<"Way of killing:";
    getline(cin, wayOfkilling);

    Serialkiller* s1= new Serialkiller(name, noOfvictims, wantedLevel);
    s1->setWayOfkilling(wayOfkilling);

    cout<<"_________________________________\n";
    cout<<"Enter details of serial killer :\n";
    cout<<"Name: ";
    getline(cin, name);
    cout<<"Numberof victims: ";
    cin>> noOfvictims;
    cout<<"Wanted level: ";
    cin>> wantedLevel;
    cin.ignore(); // to ignore the newline character left in the buffer
    cout<<"Way of killing:";
    getline(cin, wayOfkilling);

    Serialkiller* s2 = new Serialkiller(name, noOfvictims, wantedLevel);
    s2->setWayOfkilling(wayOfkilling);

    cout<<"_________________________________\n";
    cout<<"Details of Serial Killers are:\n";
    s1->displayDetails(s1);
    s1->getWayOfkilling();
    cout<<"---------------------------------\n";
    s2->displayDetails(s2);
    s2->getWayOfkilling();

    

    //free memory explicitly
    delete s1;
    delete s2;

    return 0;
}
