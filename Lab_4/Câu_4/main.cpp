#include <iostream>
#include "NgayThangNam.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
    NgayThangNam a;
    cout << a << endl;

    cout << "Nhap ngay thang nam cho phan so a: " << endl;
    cin >> a;
    cout << "Ngay thang nam a: " << a << endl;

    NgayThangNam b;
    cout << "Nhap ngay thang nam cho phan so b: " << endl;
    cin >> b;
    cout << "Ngay thang nam b: " << b << endl;

    NgayThangNam c = a++;
    cout << "Ket qua cua phep a++ (+1 ngay) la: " << c << endl;
    c = ++a;
    cout << "Ket qua cua phep ++a (+1 ngay) la: " << c << endl;

    c = --a;
    cout << "Ket qua cua phep --a (tru 1 ngay) la: " << c << endl;
    c = a--;
    cout << "Ket qua cua phep a-- (tru 1 ngay) la: " << c << endl;

    if (a == b)
        cout << "Hai NgayThangNam a va b bang nhau" << endl;
    else
        cout << "Hai NgayThangNam a va b khong bang nhau" << endl;

    if (a != b)
        cout << "Hai NgayThangNam a va b khac nhau" << endl;
    else
        cout << "Hai NgayThangNam a va b bang nhau" << endl;

    if (a >= b)
        cout << "Ket qua cua phep toan a >= b la: True" << endl;
    else
        cout << "Ket qua cua phep toan a >= b la: False" << endl;

    if (a > b)
        cout << "Ket qua cua phep toan a > b la: True" << endl;
    else
        cout << "Ket qua cua phep toan a > b la: False" << endl;

    if (a < b)
        cout << "Ket qua cua phep toan a < b la: True" << endl;
    else
        cout << "Ket qua cua phep toan a < b la: False" << endl;

    return 0;
}
