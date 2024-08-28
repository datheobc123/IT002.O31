#include "Farm.hpp"
#include "Cow.hpp"
#include "Sheep.hpp"
#include "Goat.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;

void Farm::Menu() {
    do {
        cout << "CHUONG TRINH QUAN LY TRANG TRAI \n";
        cout << "1. Nhap dan gia suc. \n";
        cout << "2. Gia suc doi. \n";
        cout << "3. Thong ke sua  \n";
        cout << "4. Thong ke con. \n";
        cout << "5. Thoat. \n";

        cout << "Moi bac chon cong viec: "; cin >> select;
        switch (select) {
            case 1: Nhap();
                break;
            case 2: DoiDoi();
                break;
            case 3: ThongKeSua();
                break;
            case 4: ThongKeCon();
                break;
            case 5: exit(0);
        }
    } while (true);
}

void Farm::Nhap() 
{
    cout << "Nhap so luong gia suc: "; cin >> n;
    An = new Animal*[n];
    for (int i = 0; i < n; i++) {
        cout << "Bac muon nhap con gi (1: Bo, 2: Cuu, 3: De): "; cin >> loai;
        switch (loai) {
            case 1: An[i] = new Cow(); 
                break;
            case 2: An[i] = new Sheep(); 
                break;
            case 3: An[i] = new Goat(); 
                break;
            default: 
                cout << "Loai gia suc khong hop le!\n";
                i--;
                continue;
        }
        An[i]->Nhap();
    }
}

void Farm::Xuat() 
{
    for (int i = 0; i < n; i++) 
    {
        An[i]->Xuat();
    }
}

void Farm::ThongKeSua() 
{
    float TongluongSua = 0;
    for (int i = 0; i < n; i++) 
    {
        TongluongSua += An[i]->GetLuongSua();
    }
    cout << "Tong luong sua trong dan: " << TongluongSua << endl;
}

void Farm::ThongKeCon() 
{
    int TongluongCon = 0;
    for (int i = 0; i < n; i++) 
    {
        TongluongCon += An[i]->GetLuongCon();
    }
    cout << "Tong so con trong dan: " << TongluongCon << endl;
}

void Farm::DoiDoi() 
{
    cout << "Tieng keu cua cac gia suc trong trang trai la:\n";
    for (int i = 0; i < n; i++) 
    {
        An[i]->TiengKeu();
    }
}
