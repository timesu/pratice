/*
 * Write a program that prompts the user for two intergers.
 * Print each number in the range specified by those two
 * integers
 */

#include <iostream>

int main()
{
	int v1 = 0, v2 = 0;
	int val = 0, min = 0, max = 0;
	std::cout << "enter two number" << std::endl;
	std::cin >> v1 >> v2;
	if (v1 > v2)
	{
		min = v2;
		max = v1;
		val = v2;
	}
	else
	{
		min = v1;
		max = v2;
		val = v1;
	}
	for (val; val <= max; val++)
		std::cout << val << std::endl;
	return 0;
}
