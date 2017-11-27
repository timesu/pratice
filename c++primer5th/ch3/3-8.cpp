#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string s1("1"), s2("2"), s3("3"), line;
    //first `while` method
    decltype(s1.size()) len1 = 0;
    while(len1 < s1.size())
     {   
        s1[len1] = 's';
        len1++;
     }
    cout << s1 << endl;

    //decltype(s2.size()) len2 = 0;
    for(decltype(s2.size()) len2 = 0; len2 < s2.size(); len2++)
        s2[len2] = 's';
    cout << s2 << endl;
    
    decltype(s3.size()) len3 = 0;
    for (auto &c : s3)
        c = 's';
    cout << s3 << endl;

    return 0;

}