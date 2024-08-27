// GiaSuc.hpp
#ifndef GIASUC_HPP
#define GIASUC_HPP

#include <string>

class GiaSuc {
protected:
    int soLuong;
    double tongSua;

public:
    GiaSuc(int sl = 0);
    virtual ~GiaSuc() = default;

    virtual void keu() const = 0;
    virtual void sinh();
    virtual void choSua();
    
    int getSoLuong() const;
    double getTongSua() const;
};

#endif
