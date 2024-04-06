/*  - introducing the concept of pointers in c++  
    - always run the executable with the command $ cat pointers.cpp && /.pointers 
*/

#include <iostream>

int main()
{

    int a = 10; // initialize a
    int *ptr = &a; // define pointer ptr pointing to the address of integer a

    std::cout << "a: " << a << std::endl; // prints a

    std::cout << "ptr: " << ptr << std::endl; // prints the address pointed to by ptr

    std::cout << "&a: " << &a << std::endl; // prints the adress of a

    std::cout << "*ptr: " << *ptr << std::endl; // prints the value stored at the address pointed to by ptr
    
    *ptr = 5; // change the vaue of a using the pointer (the value stored at the address pointed to by ptr is changed to 5)

    std::cout << "a: " << a << std::endl; // prints the updated value of a

    return 0;
}
