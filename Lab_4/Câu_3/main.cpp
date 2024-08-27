#include <iostream>
#include "ThoiGian.hpp"
using namespace std;

int main() 
{
    ThoiGian t;
    cout << t;
    
    ThoiGian a;
    cin >> a;
    cout << "Thoi gian a: " << a;

    ThoiGian b(1, 30, 45);
    cout << "Thoi gian b: " << b;

    ThoiGian c = a + b;
    cout << "Thoi gian a + b: " << c;

    ThoiGian d = b - a;
    cout << "Thoi gian b - a: " << d;

    a++;
    cout << "Thoi gian a sau khi tang 1 giay: " << a;

    b--;
    cout << "Thoi gian b sau khi giam 1 giay: " << b;
    // == , !=, >=, <=, >, <
    bool e = a == b;
    cout << "a == b: " << (e ? "True" : "False") << endl;
    bool not_e = a != b;
    cout << "a != b: " << (not_e ? "True" : "False") << endl;
    bool gt = (a>=b);
    cout << "a >= b: " << (gt ? "True" : "False") << endl;
    bool lt = (a<=b);
    cout << "a <= b: " << (lt ? "True" : "False") << endl;
    bool g = (a>b);
    cout << "a > b: " << (g ? "True" : "False") << endl;
    bool l = (a<b);
    cout << "a < b: " << (l ? "True" : "False") << endl;
    return 0;
}
