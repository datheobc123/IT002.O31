#include "Deluxe.hpp"
#include <iostream>
using namespace std;

Deluxe::Deluxe(int So_Dem, double Phi_Phuc_Vu, double Phi_Dich_Vu)
{
	this->So_Dem = So_Dem;
	this->Phi_Phuc_Vu = Phi_Phuc_Vu;
	this->Phi_Dich_Vu = Phi_Dich_Vu;
}

void Deluxe::nhap()
{
    cout << "Moi nguoi dung nhap vao thong tin Deluxe lan luot: So dem | Phi phuc vu | Phi dich vu" << endl;
    cin >> So_Dem >> Phi_Phuc_Vu >> Phi_Dich_Vu;
}

void Deluxe::xuat()
{
    cout << "Doanh thu phong Deluxe la: " << Doanh_thu() << endl;
}

double Deluxe::Doanh_thu() 
{
    return So_Dem * 750000 + Phi_Phuc_Vu + Phi_Dich_Vu;
}

Deluxe::~Deluxe() {}
