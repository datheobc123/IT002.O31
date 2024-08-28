#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
using namespace std;

class Animal {
private:
    int soCon;
    float soSua;
    string tiengKeu;
    int type;
public:
    Animal();
    void Nhap();
    void Xuat();
    void SetAnimalType(int t);
    void SetAnimalSua(float s);
    void SetAnimalCon(int c);
    void SetAnimalTiengKeu(string tk);
    float GetLuongSua();
    float GetLuongCon();

    virtual void ChoSua() = 0;
    virtual void SinhCon() = 0;
    virtual void TiengKeu() = 0;
    virtual ~Animal();
};

#endif
