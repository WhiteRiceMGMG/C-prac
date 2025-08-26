#include <iostream>
using namespace std;

int main(void)
{
    int a = 10;
    int b = 3;
    double c;
    // 同じ型で割ってるのでその型になる．
    c = a / b;

    cout << a << " ÷ " << b << "=" << c << endl;

    return 0;


}