// about features in cpp
// well its about oop object oriented paradigm:
#include <bits/stdc++.h>
using namespace std;
int main()
{
    auto an_int = 22;
    auto a_bool = false;
    auto a_float = 22.555;
    auto ptr = &a_float;
    // cout << typeid(a_bool).name()<< "\n";
    // cout << typeid(an_int).name() << "\n";
        // Using typeid to get the type information
    const std::type_info& int_type = typeid(an_int);
    const std::type_info& bool_type = typeid(a_bool);
    const std::type_info& float_type = typeid(a_float);

    // Outputting the name of the types
    std::cout << "Type of an_int: " << int_type.name() << "\n";
    std::cout << "Type of a_bool: " << bool_type.name() << "\n";
    std::cout << "Type of a_float: " << float_type.name() << "\n";
    return 0; 
}