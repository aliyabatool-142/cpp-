//overriding with polymorphism
#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
public:
    virtual void animalSound() {  // <--- make it virtual
        cout << "The animal makes a sound\n";
    }
};

// Derived class
class Pig : public Animal {
public:
    void animalSound() override {     //inherit from Animal
        cout << "The pig says: wee wee\n";
    }
};

// Derived class
class Dog : public Animal {    //inherit from Animal
public:
    void animalSound() override {
        cout << "The dog says: bow wow\n";
    }
};

// Derived class
class Snake : public Animal {  //inherit from Animal
public:
    void animalSound() override {
        cout << "The snake says: hiss hiss\n";
    }
};

int main() {
    Animal* a1;
    Pig p1;
    Dog d1;
    Snake s1;

    // Pointing base class pointer to different derived objects
    a1 = &p1;
    a1->animalSound();   // Pig’s sound

    a1 = &d1;
    a1->animalSound();   // Dog’s sound

    a1 = &s1;
    a1->animalSound();   // Snake’s sound

    return 0;
}
