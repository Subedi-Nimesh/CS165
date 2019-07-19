#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string tohex(const string& s, bool upper=false)
{
    ostringstream ret;

    unsigned int c;
    for (string::size_type i = 0; i < s.length(); ++i)
    {
        c = (unsigned int)(unsigned char)s[i];
        ret << hex << setfill('0') <<
            setw(2) << (upper ? uppercase : nouppercase) << c;
    }
    return ret.str();
}

int main()
{
    char buf[20] = { 23, 54, 72, 69, 68, 42, 64, 59, 8, 0,
                     100, 46, 54, 16, 62, 37, 49, 95, 25, 90 };


    string s(buf, 20);
    cout << "hex: " << tohex(s) << endl;
    cout << "HEX: " << tohex(s, true) << endl;
    return 0;
}