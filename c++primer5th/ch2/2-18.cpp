#include <iostream>

int main()
{
    int i = 10, *ip = NULL;
    ip = &i;
    std::cout << " ip = &i, *ip = " << *ip << " ip = "<< ip << std::endl;

    //int j = 10, *jp = NULL;
   // *jp = j;
   // std::cout << " *jp = j, *jp = " << *jp << std::endl;
   i = 11;
   std::cout << "i = 11, *ip =  " << *ip << std::endl; 

    return 0;
}