#include <iostream>
using namespace std;

int main() {
    int n;

    // Nhap so nguyen n
    cout << "Nhap so nguyen n: ";
    cin >> n;

    // �am bao n l� so nguy�n duong
    if (n < 0) {
        cout << "Vui long nhap so nguyen duong." << endl;
        return 1; // Ket thuc chuong tr�nh voi ma lai
    }

    // T�nh tong c�c chi so caa n
    int sum = 0;
    int digit;

    while (n > 0) {
        digit = n % 10;   // La chu so cuoi cung
        sum += digit;      // Cog chu so v�o tong
        n = n / 10;        // Loai bo chu so cuoi cung
    }

    // In ra tong cac chu so
    cout << "Tong cac chu so cua " << n << " la: " << sum << endl;

    return 0;
}

