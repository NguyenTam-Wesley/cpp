#include <iostream>
#include <stdlib.h>
#include <time.h>
// Trang web ho tro code C++ truc tuyen https://www.programiz.com/cpp-programming/online-compiler/
using namespace std;
int main() {
    int n = 7; // so phan tu cua mang
    int a[100] = { 2, 7, 9, 11, 1, 6, 2 }; // Mang da duoc cho san gia tri trong de bai
    int sumComp = 0;
    int sumSwap = 0;
    int countTurn = 1;
    int m = n;
    int numComp = 0;
    int numSwap = 0;
    cout << "Nhap mang ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    // Bat dau for 1 [Ket thuc for 1 o dong 53(line 53)]
    // (Begin) Thay doi tuy thuat toan
    for (int i = 0; i < n - 1; i++) { // chu y dieu kien vong lap for
        numComp = 0;
        numSwap = 0; 
        for (int j = n - 1; j > i; j--) // chu y dieu kien vong lap for
        {
            numComp++; // chu y dung cai numcomp nay dung cach
            if (a[j] >= a[j - 1])
            {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
                numSwap++; // chu y dung cai numswap nay dung cach
            }
        }
    // (End) Thay doi tuy thuat toan
    // [(Begin) Van mau tong quat]
        //  [(Begin) Van mau cho tung vong lap( tung buoc)] 
        cout << "Luot " << countTurn << ": [";
        for (int i = 0; i < m; i++) {
            if (i < m - 1) {
                cout << a[i] << " ";
            }
            else {
                cout << a[i] << "]";
            }
        }
        cout << " - Comps = " << numComp << " - Swaps = " << numSwap << "\n";
        sumComp += numComp;
        sumSwap += numSwap;
        countTurn++;
        // [(End) Van mau cho tung vong lap( tung buoc)]
    } // Ket thuc for 1 [Bat dau for 1 o dong 20(line 20]
    cout << "\nSum of Comps = " << sumComp;
    cout << "\nSum of Swaps = " << sumSwap;
    // [(End) Van mau tong quat]
    return 0;
}
