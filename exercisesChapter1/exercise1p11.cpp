/* write a program that prompts the user for two integers. print each number in the range specified by the two integers  */

#include <iostream>

int main()
{
    int low;
    int up;

    std::cout << "enter lower and upper limits:" << std::endl;

    std::cin >> low;
    std::cin >> up;

    while(low <= up)
    {
        std::cout << low << std::endl;
        ++low;
    }

    return 0;
}
