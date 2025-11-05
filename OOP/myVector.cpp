#include <iostream>
using namespace std;

class Vector{
public:
    int size;
    int capacity;
    int* arr;
    Vector(){     // Constructor to initialize the vector
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    void add(int ele){
        if(size==capacity){
            int* arr2 = new int[capacity*2]; // create a new array with double the capacity
            for(int i = 0; i<size; i++){
                arr2[i] = arr[i];
            } 
            arr = arr2; // delete the old array and point to the new one
        }
        arr[size++] = ele; //can also write arr[size] = ele;  size++;
    }

    void print(){
        for(int i = 0; i<size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int get(int idx){
        if(size==0){
            cout<<"vector is empty "<<endl;
            return -1; // or throw an exception
        }
        if(idx>=size || idx<0){
            cout<<"invalid index "<<endl;
            return -1; // or throw an exception
        }
        return arr[idx];
    }

    void remove(){
        if(size==0){
            cout << "Vector is empty, nothing to remove." << endl;
        }
        size--;
    }

};
int main(){
    Vector v;
    cout<<v.size<<" "<<v.capacity<<endl; // Output: 0 1
    cout << "Adding elements to the vector:" << endl;
    v.print(); // Output: (empty)
    v.add(10);
    v.print(); // Output: 10
    cout << "Size: " << v.size << ", Capacity: " << v.capacity << endl; // Output: Size: 1, Capacity: 1
    v.add(20);
    v.print(); // Output: 10 20
    cout << "Size: " << v.size << ", Capacity: " << v.capacity << endl; // Output: Size: 2, Capacity: 2
    v.add(30);
    v.print(); // Output: 10 20 30
    cout << "Size: " << v.size << ", Capacity: " << v.capacity << endl; // Output: Size: 3, Capacity: 4
    
    v.remove();
    v.print(); // Output: 10 20
    cout << "Size: " << v.size << ", Capacity: " << v.capacity << endl; // output Size: 2, Capacity: 4
    return 0;
}