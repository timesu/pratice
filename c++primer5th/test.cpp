#include <iostream>

int main()
{
	int a = ~255;
	int b = 500 & ~255;
	std::cout << " ~255 = " << a << std::endl;
	std::cout << " 555 & ~255 = " << b << std::endl;

	return 0;
}