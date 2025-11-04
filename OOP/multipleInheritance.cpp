#include <iostream>
using namespace std;

class Coder{
public:
    string language;
    int experience;

};

class Reader{
public:
    int books;
    int unreadBooks;
    string favBook;
    int readCount(){
        return books-unreadBooks;
    }

};

class Me : public Coder , public Reader{
public:
    string name;
    int age;

};

int main(){
    Me m1;
    m1.name = "Aliya";
    m1.age = 20;
    m1.language = "C++ ";
    m1.experience = 1;
    m1.books = 10;
    m1.unreadBooks = 3;
    m1.favBook = "Metamorphosis";

    cout<<"Name : "<<m1.name<<endl;
    cout<<"Age : "<<m1.age<<endl;
    cout<<"Language : "<<m1.language<<endl;
    cout<<"Experience : "<<m1.experience<<endl;
    cout<<"Books : "<<m1.books<<endl;
    cout<<"Unread books : "<<m1.unreadBooks<<endl;
    cout<<"Favourite book : "<<m1.favBook<<endl;
    
    cout<<"Read count : "<<m1.readCount()<<endl;
    return 0;
}