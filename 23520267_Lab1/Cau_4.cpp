#include <iostream>
using namespace std;

struct Lich
{
    int ngay, thang, nam;
};

bool kiem_tra_nam_nhuan(int nam)
{
    return (nam % 4 == 0 and nam % 100 != 0) or (nam % 400 == 0);
}

void Tim_Ngay_Ke_Tiep(Lich a, bool f)
{
    if (a.ngay < 1 or a.ngay > 31 or a.thang < 1 or a.thang > 12 or a.nam < 1)
    {
        cout << "Invalid" << endl;
        return;
    }

    if (a.ngay == 31 and (a.thang == 1 or a.thang == 3 or a.thang == 5 or a.thang == 7 or a.thang == 8 or a.thang == 10))
    {
        cout << "Ngay ke tiep la: 1/" << a.thang + 1 << '/' << a.nam << endl;
    }
    else if (a.ngay == 30 and (a.thang == 4 or a.thang == 6 or a.thang == 9 or a.thang == 11))
    {
        cout << "Ngay ke tiep la: 1/" << a.thang + 1 << '/' << a.nam << endl;
    }
    else if (a.thang == 2)
    {
        if (f)
        {
            if (a.ngay == 29)
                cout << "Ngay ke tiep la: 1/3/" << a.nam << endl;
            else
                cout << "Ngay ke tiep la: " << a.ngay + 1 << "/2/" << a.nam << endl;
        }
        else    
        {
            if (a.ngay == 28)
                cout << "Ngay ke tiep la: 1/3/" << a.nam << endl;
            else if (a.ngay >28)
                cout << "Invalid" << endl;
            else
                cout << "Ngay ke tiep la: " << a.ngay + 1 << "/2/" << a.nam << endl;
        }
    }
    else if (a.thang == 12 and a.ngay == 31)
    {
        cout << "Ngay ke tiep la: 1/1/" << a.nam + 1 << endl;
    }
    else
    {
        cout << "Ngay ke tiep la: " << a.ngay + 1 << '/' << a.thang << '/' << a.nam << endl;
    }
}

int main()
{
    Lich a;
    cout << "Nhap ngay: "; cin >> a.ngay;
    cout << "Nhap thang: "; cin >> a.thang;
    cout << "Nhap nam: "; cin >> a.nam;
    cout << endl;

    bool f = kiem_tra_nam_nhuan(a.nam);
    Tim_Ngay_Ke_Tiep(a, f);

    return 0;
}
