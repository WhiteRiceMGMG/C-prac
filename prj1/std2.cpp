/*****************************************************************
 *  ios::dec 10進数 
 *  ios::hex 16進数
 *  ios::oct 8進数
 *  setf関数を使って書式設定を行うことが出来る．
 *  unsetf関数を使ってフラグ設定を解除する必要がある，
 *****************************************************************/
#include <iostream>
using namespace std;

int main(void)
{
    int a = 10;
    int b = 100;

    cout << "通常表示" << endl;
    cout << "a = " << a <<endl;
    cout << "b = " << b << endl << endl;

    cout << "10進数表示"  << endl;
    cout.setf(ios::dec);
    cout << "a = " << a <<endl;
    cout << "b = " << b << endl << endl;
    cout.unsetf(ios::dec);

    cout << "8進数表示"  << endl;
    cout.setf(ios::oct);
    cout << "a = " << a <<endl;
    cout << "b = " << b << endl << endl;
    cout.unsetf(ios::oct);

    cout << "16進数表示"  << endl;
    cout.setf(ios::hex);
    cout << "a = " << a <<endl;
    cout << "b = " << b << endl << endl;
    cout.unsetf(ios::hex);

    return 0;
}



