// 6. Method Overriding

// A child class can redefine a function from the parent class with the same signature.

// Example
#include <iostream>
class Parent {
public:
    void show() {
        std::cout << "This is the Parent class." << std::endl;
    }
};

class Child : public Parent {
public:
    void show() { // Overriding
        std::cout << "This is the Child class." << std::endl;
    }
};

int main() {
    Child obj;
    obj.show(); // Calls Child’s version of show()
    return 0;
}

// Output:
// This is the Child class.