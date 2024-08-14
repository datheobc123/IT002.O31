#include <iostream>
#include "TamGiac.hpp"
using namespace std;

int main()
{
    TamGiac a;
    a.Nhap();
    cout << "Tam giac tao boi 3 diem la" << endl;
    a.Xuat();
    cout << endl;

    int dx, dy;
    cout << "Nhap gia tri di chuyen (dx dy): ";
    cin >> dx >> dy;
    a.TinhTien(dx, dy);
    cout << "Toa do 3 dinh sau khi di chuyen la" << endl;
    a.Xuat();
    cout << endl;

    a.Quay();
    cout << "Toa do 3 dinh sau khi quay la" << endl;
    a.Xuat();
    cout << endl;

    a.PhongTo();
    cout << "Toa do 3 dinh sau khi phong to la" << endl;
    a.Xuat();
    cout << endl;

    a.ThuNho();
    cout << "Toa do 3 dinh sau khi thu nho la" << endl;
    a.Xuat();

    return 0;
}
