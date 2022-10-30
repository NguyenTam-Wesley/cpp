#include <iostream>
using namespace std;

bool SNT(int n) {
    if (n < 2) {
        return false;
    }

    for (int i = 2; i < (n - 1); i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}
bool chinhphuongnumber(int k) {
    int i = 0;
    while (i * i <= k) {
        if (i * i == k) {
            return true;
        }
        ++i;
    }
    return false;
}     

int main() {

    int choose;
    while (true) {
        cout << "===================Menu====================\t" << endl;
        cout << "Menu gom cac chuc nang sau:\n";
        cout << "Tinh trung binh tong cua so chan trong chuoi(Bai 1)" << "\n";
        cout << "Kiem tra so nguyen to(Bai 2)" << "\n";
        cout << "Kiem tra so chinh phuong(Bai 3)" << "\n";
        cout << "Huong dan su dung:" << "\n";
        cout << "Nhap phim 1 de thuc hien bai 1(Press 1 to Bai 1)\n";
        cout << "Nhap phim 2 de thuc hien bai 2(Press 2 to Bai 2)\n";
        cout << "Nhap phim 3 de thuc hien bai 3(Press 1 to Bai 3)\n";
        cout << "Nhap phim 4 de thoat Menu     (Press 4 to leave Menu)\n";

        cout << "Xin moi nhap lua chon(choose): ";
        cin >> choose;

        if (choose <= 0 || choose > 4) {
            cout << "Ban da nhap phim khong co trong menu chuc nang! Vui long nhap lai." << "\n";
            system("pause");
        }
        else if (choose == 1) {
            int a, b;
            float count = 0;
            float sum = 0;
            float avg = 0;
            cout << "Day la bai tinh trung binh tong so chan trong chuoi\n";
            cout << "Nhap so dau chuoi: ";
            cin >> a;
            cout << "Nhap so cuoi chuoi: ";
            cin >> b;
            if (a <= 0 || b <= 0) {
                cout << "Ban khong duoc nhap so khac so tu nhien!"; // so 0 cung khong phai la so tu nhien
            }
            else if (a >= b) {
                cout << "Ban khong duoc phep nhap a lon hon hoac bang b!";
            }
            else {
                while (a <= b) {
                    if (a % 2 == 0) {
                        count++;
                        sum += a;
                    }
                    a++;
                    avg = sum / count;

                }
                cout << "Trung binh tong la: " << avg;
                cout << "\n";
            }
            system("pause");
        }
        else if (choose == 2) {
            int n;
            cout << "Day la bai kiem tra so nguyen to\n";
            cout << "Nhap so can kiem tra: ";
            cin >> n;

            if (SNT(n)) {
                cout << "La so nguyen to\n";
            }
            else if (n < 0) {
                cout << "so am\n";
            }
            else {
                cout << "Khong phai so nguyen to\n";
            }
            system("pause");
        }
        else if (choose == 3) {
            int k;
            cout << "Day la bai kiem tra so chinh phuong\n";
            cout << "Nhap so can kiem tra: ";
            cin >> k;
            if (chinhphuongnumber(k)) {
                cout << "La so chinh phuong\n";
            }
            else if (k < 0) {
                cout << "Ban da nhap so am. So am chac chan khong phai la so chinh phuong thi kiem tra lam gi?\n";
            }
            else {
                cout << "Khong phai la so chinh phuong\n";
            }

            system("pause");
        }
        else {
            cout << "Ban da thoat Menu\n";
            break;
        }
    }
    return 0;
    system("pause");
}
