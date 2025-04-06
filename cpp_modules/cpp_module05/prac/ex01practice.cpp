// 1. try in C++
// The try keyword represents a block of code that may
// throw an exception placed inside the try block. 
// It’s followed by one or more catch blocks. If an exception occurs, try block throws that exception.


// 2. catch in C++
// The catch statement represents a block of code that is executed 
// when a particular exception is thrown from the try block. 
// The code to handle the exception is written inside the catch block.


// 3. throw in C++
// An exception in C++ can be thrown using the throw keyword. When a program encounters
// a throw statement, then it immediately terminates the current function 
// and starts finding a matching catch block to handle the thrown exception.

#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
    try{
        float  numerator = 10;
        float  dominator = 33;
        float  res;
        if(dominator == 0)
        {
            throw runtime_error("u cant devide a num by a zero");
        }
        res = numerator/dominator;
        cout << "res after div!" << res << endl;
    }
    catch (const exception& e)
    {
        cout << "exep " << e.what() << endl;
    }
    return 0;
}

// C++ program to demonstate the use of try,catch and throw
// in exception handling.

#include <iostream>
using namespace std;

int main()
{
    int x = -1;
    cout << "Before try \n";
    try 
    {
        cout << "Inside try \n";
        if (x < 0) 
        {
            throw x;
            cout << "After throw (Never executed) \n";
        }
    }
    catch (int x) 
    {
        cout << "Exception Caught \n";
    }
    cout << "After catch (Will be executed) \n";
    return 0;
}
