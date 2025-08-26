#include <iostream>

using namespace std;

int main(void)
{
    int x;
    int y;

    cout << "xの値を入力-->";
    cin >> x;
    cout << "yの値を入力-->";
    cin >> y;

    cout << "あなたが入力したのは" << x << "と" << y << "です．" << endl;
    cout << "合計は" << x + y << "です" << endl;

    return 0;
}