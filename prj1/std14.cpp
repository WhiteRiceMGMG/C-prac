#include <iostream>

using namespace std;

int main(void)
{
    int age;
    cout << "この度は猫でもランドに" << endl;
    cout << "ご来園ありがとうございます．" << endl;

    cout << "年齢を入力してください．" << endl;
    cin >> age;

    if(age < 6)
    {
        cout << "入場料は無料です．" << endl;
    }
    
    if(age >= 6)
    {
        cout << "入場料は千円です．" << endl;
    }

    cout  << "お楽しみください．" << endl;

    return 0;
}