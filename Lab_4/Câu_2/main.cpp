#include <iostream>
#include "SoPhuc.hpp"
using namespace std;
int main(int argc, char const *argv[])
{
    SoPhuc a;
    cout << a;
    cin >> a;
    SoPhuc b;
    cout << "So Phuc thu nhat: " << a;

    cin >> b;
    cout << "So Phuc thu hai: " << b;

    SoPhuc c;

    c = a + b;
    cout << "Ket qua cua phep cong 2 So Phuc la:\n" << c;

    c = a - b;
    cout << "Ket qua cua phep tru 2 So Phuc la:\n" << c;

    c = a * b;
    cout << "Ket qua cua phep nhan 2 So Phuc la:\n" << c;

    c = a / b;
    cout << "Ket qua cua phep chia 2 So Phuc la:\n" << c;


    cout << "So Phuc a va b lan luot la: " << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;

    return 0;
}
