// 1. What is Inheritance?

// Inheritance is a fundamental concept in Object-Oriented Programming (OOP) 
// that allows a class (child class) to acquire the properties and behavior of another class (parent class).
// This promotes code reuse, modularity, and hierarchy representation.
#include <iostream>
class Parent 
{
public:
    void show() 
    {
        std::cout << "This is the parent class." << std::endl;
    }
};

class Child : public Parent 
{
   
};

int main() 
{
    Child obj;
    obj.show();
    
    return 0;
}



// Why Use Inheritance?

// Code Reusability: Reduces redundancy by reusing existing class functionality.

// Modularity: Organizes code into logical hierarchies.

// Extensibility: New classes can extend existing classes without modifying them.

// Polymorphism: Enables function overriding for dynamic behavior.