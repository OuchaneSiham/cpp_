Constructor & Destructor Chaining

When an object of the child class is created, the parent class constructor is called first, 
then the child class constructor. Similarly, during destruction, the child destructor is called first,
 then the parent destructor.

Example

class Parent 
{
public:
    Parent() { std::cout << "Parent Constructor" << std::endl; }
    ~Parent() { std::cout << "Parent Destructor" << std::endl; }
};

class Child : public Parent 
{
public:
    Child() { std::cout << "Child Constructor" << std::endl; }
    ~Child() { std::cout << "Child Destructor" << std::endl; }
};

int main() 
{
    Child obj;
    return 0;
}

Output:
Parent Constructor
Child Constructor
Child Destructor
Parent Destructor
