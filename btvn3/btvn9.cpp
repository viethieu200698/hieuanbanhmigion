#include <iostream>
using namespace std;

int main() {
    int n;

    // Nhap so nguyen n
    cout << "Nhap so nguyen n: ";
    cin >> n;

    // Ðam bao n là so nguyên duong
    if (n < 0) {
        cout << "Vui long nhap so nguyen duong." << endl;
        return 1; // Ket thuc chuong trình voi ma lai
    }

    // Tính tong các chi so caa n
    int sum = 0;
    int digit;

    while (n > 0) {
        digit = n % 10;   // La chu so cuoi cung
        sum += digit;      // Cog chu so vào tong
        n = n / 10;        // Loai bo chu so cuoi cung
    }

    // In ra tong cac chu so
    cout << "Tong cac chu so cua " << n << " la: " << sum << endl;

    return 0;
}

