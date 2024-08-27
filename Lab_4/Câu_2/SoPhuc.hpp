#pragma once
#include <iostream>
using namespace std;
class SoPhuc 
{
private:
    int Thuc, Ao;

public:
    SoPhuc();
    SoPhuc(int Thuc, int Ao);
    ~SoPhuc();

    friend istream& operator>>(istream& is, SoPhuc& a);
    friend ostream& operator<<(ostream& os, SoPhuc& a);

    SoPhuc operator+(SoPhuc& b);
    SoPhuc operator-(SoPhuc& b);
    SoPhuc operator*(SoPhuc& b); 
    SoPhuc operator/(SoPhuc& b);

    bool operator==(SoPhuc& b);
    bool operator!=(SoPhuc& b);
};
