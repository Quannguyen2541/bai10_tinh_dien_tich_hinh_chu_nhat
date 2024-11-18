// bai10_tinh_dien_tich_hinh_chu_nhat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	cout << " Chuong trinh tinh chu vi dien tich hinh chu nhat\n";
	double chieudai, chieurong, chuvi,dientich;
	cout << "Nhap a (chieu dai):\n";
	cin >> chieudai;
	cout << "Nhap b (chieu rong):\n";
	cin >> chieurong;
	chuvi = (chieudai + chieurong) * 2;
	dientich = chieudai * chieurong;
	cout << "chu vi hinh chu nhat la:\n" << chuvi << endl;
	cout << "dien tich hinh chu nhat la:\n" << dientich << endl;
	return 0;

}
