#include <iostream>

int main()
{
	std::cout << "Input two numbers" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	int v3 = 0, min = 0, max = 0;
	if (v1 > v2)
	{
		v3 = v2;
		min = v2;
		max = v1;
	}
	else
	{
		v3 = v1;
		min = v1;
		max = v2;
	}
	while(v3 <= max)
	{
		std::cout << v3 << std::endl;
		v3++;
	}

	return 0;

}
