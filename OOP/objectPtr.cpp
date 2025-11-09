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
        cout<<"----------------------------------"<<endl;
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
    Serialkiller* s1 = new Serialkiller("jeffery dahmer", 17, 9.5);
    s1->setWayOfkilling("strangulation");
    s1->displayDetails(s1);
    s1->getWayOfkilling();

    Serialkiller* s2 = new Serialkiller("Ted Bundy ", 30 , 10);
    s2->setWayOfkilling("bludgeoning and strangulation");
    s2->displayDetails(s2);
    s2->getWayOfkilling();

    //free memory explicitly
    delete s1;
    delete s2;

}