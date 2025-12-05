#include <iostream>
using namespace std;
class Vector{
public:
    int size;
    int capacity;
    int* arr;

    Vector(){
        size = 0;
        capacity = 1;
        arr = new int [1];
    }

    void add(int ele){
        if(size == capacity){
            capacity*=2;
            int* arr2 = new int[capacity];
            for(int i=0; i<size; i++){
                arr[i] = arr2[i];
            }
            arr = arr2;
        }
        arr[size++] = ele;
    }

    int get(int idx){
        if(size==0){
            cout<<"vector is empty "<<endl;
            return -1;

        }
        if(idx,0 || idx>=size){
            cout<<"invalid index "<<endl;
            return -1;
        }
        return arr[idx];
    }

    void print(){
        for (int i=0; i<size; i++){
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }

};

int main(){
    Vector v;
    cout<<v.size<<" "<<v.capacity<<endl; // Output: 0 1
    v.add(10);  
    v.print(); // Output: 10

}