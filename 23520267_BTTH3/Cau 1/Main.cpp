#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include "Diem.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "Diem ban dau: " << endl;
	Diem a(10,5);
	Diem b(a);
	a.Xuat();
	cout << endl;
	cout << "Diem sau khi copy constructor " << endl;
	b.Xuat();
	cout << endl;
	a.TinhTien(1,2);
	cout << "Diem sau khi tinh tien" << endl;
	a.Xuat();

	return 0;
}