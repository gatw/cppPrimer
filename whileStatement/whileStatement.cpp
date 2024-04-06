#include <iostream>

int main()
{
    int num = 1;

    int sum;

    int lim;

    std::cout << "enter the upper limit:" << std::endl;
    std::cin >> lim;

    while(num <= lim)
    {
        sum += num;
        ++num;
    }
    
    std::cout << "sum of numbers up to " << lim << " is " << sum << std::endl;

    return 0;
}
