#include "Animal.hpp"
#include <iostream>
using namespace std;

Animal::Animal() : soCon(0), soSua(0), tiengKeu(""), type(0) {}

void Animal::Nhap() 
{
    cout << "Nhap so sua: "; 
    cin >> this->soSua;
    cout << "Nhap so con: "; 
    cin >> this->soCon;
    cout << "Nhap tieng keu: "; 
    cin >> this->tiengKeu;
}

void Animal::Xuat() 
{
    cout << "Con vat nay co tieng keu: " << this->tiengKeu << ", so con: " << this->soCon << ", cho so sua: " << this->soSua << endl;
}

void Animal::SetAnimalType(int t) 
{
	this->type = t; 
}
void Animal::SetAnimalSua(float s)
{
	this->soSua = s; 
}
void Animal::SetAnimalCon(int c) 
{
	this->soCon = c;
}
void Animal::SetAnimalTiengKeu(string tk) 
{
	this->tiengKeu = tk; 
}

float Animal::GetLuongSua() 
{
	return soSua; 
}
float Animal::GetLuongCon() 
{
	return soCon; 
}

Animal::~Animal() {}
