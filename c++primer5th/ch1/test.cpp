
/*
 /*
 * Write a program that prompts the user for two intergers.
 * Print each number in the range specified by those two
 * integers
 

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item book;
	// read ISBN, number of copies sold, and sales price
	std::cin >> book;
	// write ISBN, number of copies sold, total revenue, and average price
	std::cout << book << std::endl;
	return 0;
}

*/

//1.5.2
#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	//first check that item1 and item2 represent the same book
	if (item1.isbn() == item2.isbn())
	{
		std::cout << item1 + item2 << std::endl;
		return 0;
	}
	else
	{
		std::cerr << "Data must refer to same ISBN"
		          << std::endl;
		return -1;
	}

}