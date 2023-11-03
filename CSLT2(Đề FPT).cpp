#include<iostream>
// #include <math.h> (Them cai nay neu chay code bi bao loi)
using namespace std;

int main() {
	int n; // bien cua menu
	double a; //bien case 1
	int x; //bien case 2
	int y; //bien case 2
	double nghiem; //bien case 2
	float xx, yy, zz, delta, x1, x2; //bien case 3
	int i, j; // bien case 4
	double b1 = 1.678, b2 = 1.734, b3 = 2.014, b4 = 2.536, b5 = 2.834, b6 = 2.927; // bien case 4
	double t; // bien case 4
	cout << "This is a Menu Lab 3\n" << "Menu nay su dung switch case\n"
		<< "Menu gom nhung chuc nang sau: \n"
		<< "1. Danh gia hoc luc\n"
		<< "2. Tim nghiem cua nhi thuc bac nhat\n"
		<< "3. Tim nghiem cua tam thuc bac hai\n"
		<< "4. Tinh tien dien\n"
		<< "Huong dan su dung:\n"
		<< "Nhap 1 de thuc hien chuc nang 1\n"
		<< "Nhap 2 de thuc hien chuc nang 2\n"
		<< "Nhap 3 de thuc hien chuc nang 3\n"
		<< "Nhap 4 de thuc hien chuc nang 4\n"
		<< "Nhap so bac ki khac cac so tren se thoat Menu\n"
		<< "Xin moi chon chuc nang: ";
	cin >> n;
	switch (n) {
	case 1:
		cout << "Ban da chon chuc nang danh gia hoc luc\n"
			 << "Nhap diem : ";
		cin >> a;
		if (a < 0 || a > 10) {
			cout << " Ban da nhap sai, vui long nhap lai";
		}
		else if (a <= 9 && a > 8) {
			cout << "Xuat sac";
		}
		else if (a < 9 && a >= 8) {
			cout << "Gioi";
		}
		else if (a < 8 && a >= 6.5) {
			cout << "Kha";
		}
		else if (a < 6.5 && a >= 5) {
			cout << "Trung binh";
		}
		else if (a < 5 && a >= 3.5) {
			cout << "Yeu";
		}
		else {
			cout << "Kem";
		}
		break;
	case 2:
		cout << "Ban da chon chuc nang tim nghiem cua nhi thuc bac nhat\n"
			 << "Xin moi nhap\n";
		cout << "Nhap x = ";
		cin >> x;
		cout << "Nhap y = ";
		cin >> y;
		if (x == 0) {
			if (y == 0) {
				cout << "Phuong trinh vo so nghiem" << endl;
			}
			else {
				cout << "Phuong trinh vo nghiem" << endl;
			}
		}
		else {
			nghiem = (double)-y / x;
			cout << "Phuong trinh co nghiem la: " << nghiem << endl;
		}
		break;
	case 3:
		cout << "Ban da chon chuc nang tim nghiem cua tam thuc bac hai\n"
			 << "Xin moi nhap\n";
		cout << "Nhap xx = ";
		cin >> xx;
		cout << "Nhap yy = ";
		cin >> yy;
		cout << "Nhap zz = ";
		cin >> zz;
		if (xx == 0) {
			// xx == 0 phuong trinh tro thanh phuong trinh bac mot bx + c = 0
			if (yy == 0) {
				if (zz == 0) {
					cout << "Phuong trinh vo so nghiem" << endl;
				}
				else {
					cout << "Phuong trinh vo nghiem" << endl;
				}
			}
			else {
				cout << "Phuong trinh co nghiem duy nhat: " << -zz / yy << endl;
			}
		}
		else {
			delta = yy * yy - 4 * xx * zz;
			if (delta > 0) {
				x1 = (-yy + sqrt(delta)) / (2 * xx);
				x2 = (-yy - sqrt(delta)) / (2 * xx);
				cout << "Nghiem thu nhat x1 = " << x1 << endl;
				cout << "Nghiem thu hai x2 = " << x2 << endl;
			}
			else if (delta == 0) {
				cout << "Phuong trinh co nghiem kep: x1 = x2 = " << -yy / 2 * xx << endl;
			}
			else {
				cout << "Phuong trinh vo nghiem" << endl;
			}
		}
		break;
	case 4:
		cout << "Ban da chon chuc nang tinh tien dien\n"
			 << "Xin moi nhap so dien da dung: ";
		cin >> i;
		if (i < 0) {
			cout << "Khong the nhap so nho hon zero!" << endl;
		}
		else if (i <= 50) {
			t = i * b1;
			cout << "Tien dien la: " << t << " vnd" << endl;
		}
		else if (i <= 100) {
			j = i - 50;
			t = 50 * b1 + (j * b2);
			cout << "Tien dien la: " << t << " vnd" << endl;
		}
		else if (i <= 200) {
			j = i - 100;
			t = 50 * b1 + (50 * b2) + (j * b3);
			cout << "Tien dien la: " << t << " vnd" << endl;
		}
		else if (i <= 300) {
			j = i - 200;
			t = 50 * b1 + (50 * b2) + (100 * b3) + (j * b4);
			cout << "Tien dien la: " << t << " vnd" << endl;
		}
		else if (i <= 400) {
			j = i - 300;
			t = 50 * b1 + (50 * b2) + (100 * b3) + (100 * b4) + (j * b5);
			cout << "Tien dien la: " << t << " vnd" << endl;
		}
		else {
			j = i - 400;
			t = 50 * b1 + (50 * b2) + (100 * b3) + (100 * b4) + (100 * b5) + (j * b6);
			cout << "Tien dien la: " << t << " vnd" << endl;
		}
		break;
	default:
		cout << "Invalid input! Please enter week number between 1-4";
	}
	return 0;
}
