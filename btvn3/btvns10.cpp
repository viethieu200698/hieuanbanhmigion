#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    // L?p d? t�m ch? s? d?u ti�n c?a n
    while (n >= 10) {
        n /= 10;
    }

    cout << "Chu so dau tien cua n la: " << n << endl;

    return 0;
}
