#include<iostream>
using namespace std;

struct book{
    string title;
    string author;
    string isbnNumber;
    int bookNumber;
};
int main(){
    book b1 = {"Bio", "Alex", "111222", 1};
    book b2 = {"Phy", "Jibrial", "333444", 2};
    book b3 = {"Chem", "zara", "666777", 3};
    
    cout<<"\t Title \tAuthor \tISBN number\tBook number"<<endl;
    cout<<"\t"<<b1.title<<"\t"<<b1.author<<"\t"<<b1.isbnNumber<<"\t"<<b1.bookNumber<<endl;
    cout<<"\t"<<b2.title<<"\t"<<b2.author<<"\t"<<b2.isbnNumber<<"\t"<<b2.bookNumber<<endl;
    cout<<"\t"<<b3.title<<"\t"<<b3.author<<"\t"<<b3.isbnNumber<<"\t"<<b3.bookNumber<<endl;

    // system("pause");
    return 0;
}