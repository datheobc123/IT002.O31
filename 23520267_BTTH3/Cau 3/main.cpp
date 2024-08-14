#include "DaGiac.hpp"
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so dinh cua da giac: ";
    cin >> n;
    
    DaGiac dg(n);
    
    if (dg.laDaGiac()) {
        cout << "Day la mot da giac." << endl;
    } else {
        cout << "Day khong phai la mot da giac." << endl;
        return 0;
    }
    
    int k;
    cout << "NHAP SO TINH TIEN DA GIAC: ";
    cin >> k;
    dg.TinhTien(k, k);
    cout << "Da giac sau khi tinh tien: ";
    dg.XuatDaGiac();
    
    cout << "NHAP GOC QUAY DA GIAC (do): ";
    cin >> k;
    dg.QuayDaGiac(k);
    cout << "Da giac sau khi quay: ";
    dg.XuatDaGiac();
    
    cout << "NHAP LUONG THU NHO DA GIAC: ";
    cin >> k;
    dg.ThuNho(k);
    cout << "Da giac sau khi thu nho: ";
    dg.XuatDaGiac();
    
    cout << "NHAP HE SO PHONG TO DA GIAC: ";
    cin >> k;
    dg.PhongTo(k);
    cout << "Da giac sau khi phong to: ";
    dg.XuatDaGiac();
    
    return 0;
}
