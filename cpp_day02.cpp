// C++ allows us to allocate the memory of a variable or an array in run time. This is known as Dynamic Memory Allocation.
// In other programming languages such as Java and Python, the compiler automatically manages the memories allocated to variables. But this is not the case in C++.
// In C++, the memory must be de-allocated dynamically allocated memory manually after it is of no use.
// The allocation and deallocation of the memory can be done using the new and delete operators respectively.

#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    long num = 9;
    float *ptr;
    ptr = new float[num];
    for(int i = 0; i < num; ++i)
        *(ptr + i) = i;
    cout << "display the gra of students:" << endl;
    for(int i = 0; i < num; ++i)
    {
      cout << "Student" << i + 1 << ": " << *(ptr + i)
             << endl;
}
    delete[] ptr;
    return 0;
    }