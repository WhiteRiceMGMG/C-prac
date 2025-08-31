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
        cout << "------------" < endl;

        while(1)
        {
            cin.getline(buf, 16);
            c = buf[0];
            if (c != '\n')
            {
                break;
            }
        }
        
    }
}