#include <iostream>
#include <string>

using std::string;
//using std::string::size_type;
using std::cin; using std::cout ; using std::endl;

int main()
{
    string s,p,r;
    s = "this is shorter";
    r = "this is sharter";
    p = "this is longgggggggg";

    if(s != r)
    {
        if (s > r)
            cout << "s larger" << endl;
        else
            cout << "p larger" << endl;
    }
    auto slen = s.size();
    auto plen = p.size();

    if(slen != plen)
    {
        if(slen > plen)
            cout << "slen longer : " << slen << endl;
        else
            cout << "plen longer : " << plen << endl;
    }

    return 0;

}