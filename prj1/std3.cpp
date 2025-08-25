/*****************************************************************
* ios::right 右寄せ
* ios::left 左寄せ 
  数値を固定小数点表示にするには第一引数にios::fixedを指定する．
  科学技術計算表示にするには，ios::scientificを指定する，
  第二引数にはios::floadfiledを指定する，
  右寄せ左寄せには第一引数に左右，第二引数にios::adjustfieldを指定する．
 *****************************************************************/

 #include <iostream>
 using namespace std;

 int main(void)
 {
    double d1 = 3.14;
    double d2 = 100000.0;
    double d3 = -29.123456;

    cout << "通常表示" << endl;
    cout << "d1 = " << d1 << endl;
    cout << "d2 = " << d2 << endl;
    cout << "d3 = " << d3 << endl << endl;
    
    cout << "右寄せ表示，10桁表示" << endl;
    cout.setf(ios::right, ios::adjustfield);

    cout << "d1 = ";
    cout.width(10);
    cout << d1 << endl;

    cout << "d2 = ";
    cout.width(10);
    cout << d2 << endl;

    cout << "d3 = ";
    cout.width(10);
    cout << d3 << endl << endl;
    
    cout << "固定小数点表示" << endl;
    cout.setf(ios::fixed, ios::floatfield);
    cout << "d1 = " << d1 << endl;
    cout << "d2 = " << d2 << endl;
    cout << "d3 = " << d3 << endl << endl;

    cout << "科学技術計算表示" << endl;
    cout.setf(ios::scientific, ios::floatfield);
    cout << "d1 = " << d1 << endl;
    cout << "d2 = " << d2 << endl;
    cout << "d3 = " << d3 << endl << endl;

    return 0;
 }



