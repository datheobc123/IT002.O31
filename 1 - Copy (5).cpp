#include <iostream>
#include <iomanip>
using namespace std;
struct HocSinh
{
    string Hoten;
    double toan,van;
};

void diem_trung_binh(string Hoten, double toan,double van)
{
    cout << "Diem Trung Binh cua " << Hoten << " la: ";
    cout << setprecision(2) << fixed <<(toan + van)/2;
}

int main(int argc, char const *argv[])
{
    HocSinh a;
    cout << "Nhap ten hoc sinh: " << endl;
    getline(cin,a.Hoten);
    cout << "Nhap diem toan va diem van: " << endl;
    cin >> a.toan >> a.van;
    if (a.toan < 0 or a.toan >10 or a.van < 0 or a.van > 10)
    {
        cout << "Invalid" << endl;
        return 2;
    }
    diem_trung_binh(a.Hoten, a.toan, a.van);
    return 0;
}