#include <iostream> 
using namespace std;
class Manga{        //parent class
public:
    string name;
    string characters;
    string genre;
private:
    int chapters;
protected:
    string author;
};

class Anime : public Manga{       //child/derived class
public:
    string studio;
    string director;
    int episodes;

    void setAuthor(string a){    //setter for protected member 'author'
        author = a;
    }

    string getAuthor(){         //getter for protected member 'author'
        return author;
    }
};

int main(){
    Anime a1;
    a1. name = "Attack on Titan";
    a1. characters = "Eren, Mikasa, Armin";
    a1. genre = "Action, Drama, Fantasy";
    a1. studio = "Wit Studio";
    a1. director = "Tetsuro Araki";
    a1. episodes = 75;

    a1.setAuthor("Hajime Isayama");
    // a1.chapters = 139; // Not accessible because 'chapters' is private in base class

    cout << "Manga Name: " << a1.name << endl;
    cout << "Characters: " << a1.characters << endl;
    cout << "Genre: " << a1.genre << endl;
    cout << "Studio: " << a1.studio << endl;
    cout << "Director: " << a1.director << endl;
    cout << "Episodes: " << a1.episodes << endl;
    cout<<"Author: "<<a1.getAuthor()<<endl;
    return 0;
}
/*   SINGLE INHERITENCE : child take some properties from oone parent 
     MULTIPLE INHERITENCE : child take properties from multiple parents
     MULTI LAYER INHERITENCE : child take properties from parent and grand child take properties from child */