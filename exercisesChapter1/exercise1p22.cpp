/* write a program that reads several transactions for the same isbn and writes the sum of the transactions that were read  */

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book;
    int transactionsBook = 0;

    while(std::cin >> book)
    {
        transactionsBook += 1;
    }

    std::cout << "number of transactions: " << transactionsBook << std::endl;

    return 0;
}

