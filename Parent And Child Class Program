#include <iostream>
using namespace std;

// Parent class
class Animal {
    public:
        // Public member function of parent class
        void speak() {
            cout << "Animal speaks" << endl;
        }
};

// Child class inherits from Animal class
class Dog : public Animal {
    public:
        // Overriding the speak function
        void speak() {
            cout << "Dog barks" << endl;
        }
};

int main() {
    // Create an object of the parent class
    Animal animal;
    animal.speak(); // Output: Animal speaks

    // Create an object of the child class
    Dog dog;
    dog.speak(); // Output: Dog barks

    return 0;
}
