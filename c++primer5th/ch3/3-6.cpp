#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string s("test test test");
    for (char &c : s)
        c = 's';

    cout << s << endl;

    return 0;
}