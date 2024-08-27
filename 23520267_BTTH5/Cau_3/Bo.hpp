// Bo.hpp
#ifndef BO_HPP
#define BO_HPP

#include "GiaSuc.hpp"

class Bo : public GiaSuc {
public:
    Bo(int sl = 0);
    void keu() const override;
    void sinh() override;
    void choSua() override;
};

#endif
