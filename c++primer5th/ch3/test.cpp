#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

/*int main()
{
    string s;
    cin >> s;
    cout << s << endl;

    return 0;
    
}*/

/*int main()
{
    string line;
    while(getline(cin, line))
        cout << line << endl;
    return 0;
}*/

/*int main()
{
    string s("Hello World!!!");

    decltype(s.size()) punct_cnt = 0;

    for (auto c : s)
        if (ispunct(c))
            ++punct_cnt;
    cout << punct_cnt  
         << " punctuation characters in " << s << endl;
        
    return 0;
}*/

int main()
{
    string s("Hello World!!!");

    for (auto &c : s)
        c = toupper(c);
    cout << s << endl;

    return 0;
}