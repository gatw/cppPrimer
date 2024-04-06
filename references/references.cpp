#include <iostream>

int main()
{
    int i; // initialize i
    int &ri =i; // ri refers to i

    i = 5; // the value of i is changed from 0 to 5
    ri = 10; // the value of ri is set to 10 which sets also the value of i to 10

    std::cout << i << " " << ri << std::endl;

    return 0;
}
