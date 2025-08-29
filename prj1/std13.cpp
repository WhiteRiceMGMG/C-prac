#include <iostream>
using namespace std;

int main(void)
{
    unsigned short a, b;
    a = 1;
    b = 3;

    cout << "a & b =" << (a & b) << endl;
    cout << "a | b =" << (a | b) << endl;
    cout << "a ^ b =" << (a ^ b) << endl;

    return 0;
}