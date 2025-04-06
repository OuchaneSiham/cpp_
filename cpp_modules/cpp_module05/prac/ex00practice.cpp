#include <iostream>
#include <stdexcept>
// In C++, exception handling is a mechanism that allows us 
// to handle runtime errors and exceptions are objects that represent an error 
// that occurs during the execution of a program. 
// In this article, we will learn how to throw an exception in C++.

// Syntax to Throw an Exception in C++
// throw exception_object

void divide(int x, int y)
{
    if(y == 0)
    {
        throw std::runtime_error("u cant divide a number by a zero");
    }
    std::cout << "result: " << x/y << std::endl;
}
int main()
{
    try
    {
        divide(40, 40);
    }
    catch (const std::exception& e)
        {
            std::cerr<< "Exception caught: " << e.what() << std::endl;
        }
    return 0;
}