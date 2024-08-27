// Cuu.hpp
#ifndef CUU_HPP
#define CUU_HPP

#include "GiaSuc.hpp"

class Cuu : public GiaSuc {
public:
    Cuu(int sl = 0);
    void keu() const override;
    void sinh() override;
    void choSua() override;
};

#endif
