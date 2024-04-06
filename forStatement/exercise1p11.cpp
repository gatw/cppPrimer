/* write a program that prompts two integers and writes the numbers between the two integers (icluding)  */

#include <iostream>

int main()
{
    int low;
    int up;

    std::cout << "enter the lower and upper limits:" << std::endl;

    std::cin >> low;
    std::cin >> up;
    
    std::cout << "the numbers in between the limits are:" << std::endl; 

    for(int i = low; i <= up; ++i)
    {
        std::cout << i << std::endl;
    } 

    return 0;
}


