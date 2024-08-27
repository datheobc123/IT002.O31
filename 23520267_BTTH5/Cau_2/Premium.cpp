#include "Premium.hpp"
#include <iostream>
using namespace std;

Premium::Premium(int So_Dem, double Phi_Dich_Vu) 
{
	this->So_Dem = So_Dem;
	this->Phi_Dich_Vu = Phi_Dich_Vu;
}

void Premium::nhap()
{
    cout << "Moi nguoi dung nhap vao thong tin phong Premium: So dem | Phi Dich Vu: " << endl;
    cin >> So_Dem >> Phi_Dich_Vu;
}

void Premium::xuat()
{
    cout << "Doanh thu phong Premium la: " << Doanh_thu() << endl;
}

double Premium::Doanh_thu()
{
    return So_Dem * 500000 + Phi_Dich_Vu;
}

Premium::~Premium() {}
