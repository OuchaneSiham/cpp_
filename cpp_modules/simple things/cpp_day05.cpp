// cpp basics syntax : rules to write in cpp
#include <iostream>
using namespace std;
int main()
{
    int num1 = 24;
    int num2 = 34;
    int result = num1 + num2;
    cout << result << endl;
    return 0;
    // return(num1 + num2);
}

/*
1. Header File
            The header files contain the definition of the functions and macros we are using in our program. 
            In line #1, we used the #include  <iostream> statement to tell the compiler to include an iostream header file library w
            hich stores the definition of the cin and cout standard input/output streams that we have used for input and output. 
            #include is a preprocessor directive using which we import header files.
*/

/*
2. Namespace
            A namespace in C++ is used to provide a scope or a region where we define identifiers.
            In line #2, we have used the using namespace std statement for specifying that we will be the standard namespace 
            where all the standard library functions are defined.
*/