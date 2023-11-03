#include <iostream>
using namespace std;

bool nam_nhuan(int a) {
	if (a % 4 == 0 && a % 100 != 0)
		return true;
	if (a % 400 == 0)
		return true;
	return false;
} // ok


int main() {
	int a;
	cout << "Nhap nam: ";
	cin >> a;
	if (nam_nhuan(a)) {
		cout << "Nam nhuan\n";
	}
	else {
		cout << "Nam khong nhuan\n";
	}

	int thang;
	cout << "Thang: ";
	cin >> thang;
	switch (thang) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "Thang " << thang << " co 31 ngay" << endl;
		break;
	case 2:
		if (nam_nhuan(a)) {
			cout << "Thang " << thang << " co 29 ngay\n";
		}
		else {
			cout << "Thang " << thang << " co 28 ngay\n";
		}
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "Thang " << thang << " co 30 ngay" << endl;
		break;
	default:
		cout << "Thang khong hop le" << endl;
	}

	return 0;
}
