/* write a program that reads several transactions and counts how many transactions have been recorded for each ISBN  */

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currBook;
    Sales_item tempBook;

    if(std::cin >> currBook)
    {
        int flag = 1;

        while(std::cin >> tempBook)
        {
            if(currBook.isbn() == tempBook.isbn())
            {
                flag += 1;
            }
            
            else
            {
                std::cout << "count for ISBN: " << currBook.isbn() << '\n' << flag << std::endl;
                flag = 0;
                currBook = tempBook;
                flag += 1;
            }
        }
        std::cout << "count for ISBN: " << currBook.isbn() << '\n' << flag << std::endl;
    }
    return 0;
}
