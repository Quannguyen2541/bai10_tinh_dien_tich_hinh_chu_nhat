// bai10_tinh_dien_tich_hinh_chu_nhat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	float chieudai, chieurong, dientich{};
	
	cout << "Nhap chieudai:";
	cin >> chieudai;
	cout << "Nhap chieurong:";
	cin >> chieurong;

	dientich = chieudai * chieurong;
	cout << "dien tich hinh chu nhat la :" << dientich << endl;
	return 0;
}
