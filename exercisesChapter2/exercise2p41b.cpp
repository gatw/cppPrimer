/* write a program that reads several transactions and counts how many transactions have been recorded for each ISBN  */

#include <iostream>
#include <string>

struct salesData
{
    std::string bookNumber;
    unsigned unitsSold = 0;
    double revenue = 0.0;
};

int exercise1p23()
{
    salesData currBook;
    salesData nextBook;

    double price = 0.0;

    if (std::cin >> currBook.bookNumber >> currBook.unitsSold >> price)
    {
        int count = 1;

        while (std::cin >> nextBook.bookNumber >> nextBook.unitsSold >> price)
        {
            if (nextBook.bookNumber == currBook.bookNumber)
            {
                ++count;
            }

            else
            {
                std::cout << "count for ISBN: " << currBook.bookNumber << '\n' << count << std::endl;
                currBook.bookNumber = nextBook.bookNumber;
                currBook.unitsSold = nextBook.unitsSold;
                count = 1;

            }
        }
        std::cout << "count for ISBN: " << currBook.bookNumber << '\n' << count << std::endl;
    }
    return 0;
}

int main()
{
    exercise1p23();    
    return 0;
}
