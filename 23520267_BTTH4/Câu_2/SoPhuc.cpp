#include "SoPhuc.hpp"
using namespace std;
SoPhuc::SoPhuc()
{
	Thuc = 0;
	Ao = 0;
}

SoPhuc::SoPhuc(int Thuc, int Ao) 
{
	Thuc = Thuc;
	Ao = Ao;
}

SoPhuc::~SoPhuc() {}

istream& operator>>(istream& is, SoPhuc& a) 
{
    cout << "Nhap vao phan Thuc: ";
    is >> a.Thuc;
    cout << "Nhap vao phan Ao: ";
    is >> a.Ao;
    return is;
}

ostream& operator<<(ostream& os, SoPhuc& a) 
{
    os << "Phan Thuc: " << a.Thuc << "\n";
    os << "Phan Ao: " << a.Ao << "\n";
    return os;
}

SoPhuc SoPhuc::operator+(SoPhuc& b)
{
    return SoPhuc(Thuc + b.Thuc, Ao + b.Ao);
}

SoPhuc SoPhuc::operator-(SoPhuc& b)
{
    return SoPhuc(Thuc - b.Thuc, Ao - b.Ao);
}

SoPhuc SoPhuc::operator*(SoPhuc& b)
{
    return SoPhuc((Thuc * b.Thuc - Ao * b.Ao),
                (Thuc * b.Ao + Ao * b.Thuc));
}

SoPhuc SoPhuc::operator/(SoPhuc& b)
{
    int mau = b.Thuc * b.Thuc + b.Ao * b.Ao;
    if (mau == 0) 
    {
        "Invalid !!! Mau So = 0";
        exit(2);
    }
    return SoPhuc((Thuc * b.Thuc + Ao * b.Ao) / mau,
                (Ao * b.Thuc - Thuc * b.Ao) / mau);
}

bool SoPhuc::operator==(SoPhuc& b)
{
    return (Thuc == b.Thuc) && (Ao == b.Ao);
}

bool SoPhuc::operator!=(SoPhuc& b)
{
    return !(*this == b);
}
