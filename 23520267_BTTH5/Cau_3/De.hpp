// De.hpp
#ifndef DE_HPP
#define DE_HPP

#include "GiaSuc.hpp"

class De : public GiaSuc {
public:
    De(int sl = 0);
    void keu() const override;
    void sinh() override;
    void choSua() override;
};

#endif
