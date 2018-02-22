#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a1 = 12;
    char c1 = '$';

    //宽度是4
    std::cout << std::setw(4) << a1 << std::endl;
    //宽度是4,前面填充$
    std::cout << std::setw(4) << std::setfill(c1) << a1 << std::endl;

    int a,b,s;
    cout.setf(ios::showbase);
    a = 01137;
    b = 023362;
    s = a + b;
    cout << "八进制 ";
    cout << oct << a << " + " << b << " = " << s << endl;

    a = 239;
    b = 5618;
    s = a + b;
    cout << "十进制 ";
    cout << dec << a << " + " << b << " = " << s << endl;

    a = 0x1a3e;
    b = 0x4bf;
    s = a + b;
    cout << "十六进制 ";
    cout << hex << a << " + " << b << " = " << s << endl;

    double d = 23.12345678901234567899;
    cout << d << endl;

    return 0;
}
