/*****************************************************************
basic_istream.getline関数
basic _istrem& getline(
    char_type *_Str,
    streamsize _Count
)
 *****************************************************************/

#include <iostream>
using namespace std;

int main(void)
{
    int c;
    char buf[16];
    bool end = false;

    while(1)
    {
        cout << "----MENU----" << endl;
        cout << "A Game" << endl;
        cout << "B Music" << endl;
        cout << "C table" << endl;
        cout << "X end" << endl;
        cout << "------------" << endl;

        while(1)
        {
            cin.getline(buf, 16);
            c = buf[0];
            if (c != '\n')
            {
                break;
            }
        }
        switch(c)
        {
            case 'A':
            case 'a':
                cout << endl;
                cout << "ゲームばかりしないでください．" << endl;
                cout << endl;
                break;
            case 'B':
            case 'b':
                cout << endl;
                cout << "音楽が選択されました" << endl;
                cout << endl;
                break;
            case 'C':
            case 'c':
                cout << endl;
                cout << "表計算が選択されました" << endl;
                cout << endl;
                break;
            case 'X':
            case 'x':
                end = 1;
                break;
            default:
                cout << endl;
                cout << "不正な入力です．" << endl;
                cout << endl;
                break;
        }
        if(end)
        {
            break;
        }
    }
    cout << endl;
    cout << "終了です．" << endl;

    return 0;
}

//ボタン  16  19 21 14
//LED    17  18 20 15 
//ボタンの図を書く．
//ボタン四個
//711siharai