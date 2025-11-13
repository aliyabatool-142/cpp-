#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {   // not virtual
        cout << "Animal makes a sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() {   // overrides, but not polymorphism
        cout << "Dog barks\n";
    }
};

int main() {
    Dog d;
    d.sound();  // Calls Dog's version ✅
    
    Animal a;
    a.sound();  // Calls Animal's version ✅
    
    Animal* ptr = &d;
    ptr->sound();  // ❌ Still calls Animal's version! (No runtime polymorphism)
}
