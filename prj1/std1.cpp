#include <iostream>
using namespace std;

int main(void)
{
    int i = 0;
    for (i = 0; i < 150; i += 30)
    {
        cout.width(5);
        cout.fill('*');
        cout << i << endl;
    }

    return 0;
}