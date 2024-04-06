/* write a program that writes the sum of numbers 50 to 100 */

#include <iostream>

int main()
{
    int v1 = 50;
    int v2 = 100;

    int sum = 0;

    while(v1 <= v2)
    {
        sum += v1;
        ++v1;
    }
    
    std::cout << "the sum of numbers 50 to 100: " << sum << std::endl;

    return 0;
}
