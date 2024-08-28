#ifndef COW_HPP
#define COW_HPP

#include "Animal.hpp"

class Cow : public Animal 
{
public:
    Cow();
    void Nhap();
    void ChoSua();
    void SinhCon();
    void TiengKeu();
};

#endif
