/*
 * Rewrite the exercises from $ 1.4.1 using for loops
 * Exercises 1.9 Write a program that uses a while to sum the numbers from 50
 * to 100 
 */

#include <iostream>

int main()
{
	int sum = 0;
	for (int val = 50 ; val <= 100 ; ++val)
		sum += val;
	std::cout << "sum of 50 to 100 is " << sum << std::endl;
	return 0;
}
