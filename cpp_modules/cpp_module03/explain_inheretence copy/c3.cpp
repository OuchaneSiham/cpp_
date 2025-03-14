 Types of Inheritance

1️⃣ Public Inheritance (Most Common)

Public members of the parent remain public in the child.

Protected members of the parent remain protected in the child.

Private members are inherited but not accessible in the child.

class Parent 
{
public:
    int x = 10;
};

class Child : public Parent 
{
    // x is public in Child
};
Protected Inheritance

Public members of the parent become protected in the child.

Protected members remain protected.

class Parent 
{
public:
    int x = 10;
};

class Child : protected Parent 
{
    // x is now protected in Child
};

3️⃣ Private Inheritance

Public and protected members of the parent become private in the child.

Used when inheritance is for code reuse but not meant for polymorphism.

class Parent 
{
public:
    int x = 10;
};

class Child : private Parent 
{
    // x is now private in Child
};
