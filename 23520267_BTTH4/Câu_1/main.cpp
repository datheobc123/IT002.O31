#include <iostream>
#include "PhanSo.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    PhanSo a;
    cout << a;
    cin >> a;
    cout << "Phan so thu nhat: " << a << endl;

    PhanSo b;
    cin >> b;
    cout << "Phan so thu hai: " << b << endl;

    PhanSo c;
    c = a + b;
    cout << "Ket qua cua phep cong 2 phan so la: " << c << endl;

    c = a - b;
    cout << "Ket qua cua phep tru 2 phan so la: " << c << endl;

    if (a == b)
        cout << "Hai Phan So Bang Nhau" << endl;
    else
        cout << "Hai Phan So Khong Bang Nhau" << endl;

    if (a != b)
        cout << "Hai Phan So Khac Nhau" << endl;
    else
        cout << "Hai Phan So Bang Nhau" << endl;

    cout << "Goi a va b lan luot la phan so thu nhat va phan so thu hai" << endl;
    
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


