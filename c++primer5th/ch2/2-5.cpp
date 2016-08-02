#include <iostream>
int main()
{
    std::cout <<"  'a' : " << 'a' 
              <<"  L'a' : " << L'a' 
              <<"  \"a\" : " << "a"
              <<"  L\"a\" : " << L"a" << std::endl;  

    std::cout <<"  10 : " << 10
              <<"  10u : " << 10u
              <<"  10L : " << 10L
              <<"  10uL : " << 10uL
              <<"  012 : " << 012
              <<"  0xc : " << 0xc << std::endl;
    
    std::cout <<"  3.14 : " << 3.14 
              <<"  3.14f : "<< 3.14f
              <<"  3.14L : "<< 3.14L
              <<std::endl;

    std::cout <<"  10 ： " << 10
              <<"  10u : " << 10u
              <<"  10. ： "<< 10.
              <<"  10e-2 : " << 10e-2 << std::endl;
}