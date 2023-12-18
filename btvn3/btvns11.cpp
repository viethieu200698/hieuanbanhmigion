  #include <iostream>
using namespace std;

int main() {

  int n;
    cout << "Nhap s	o nguyen duong n: ";
    cin >> n;

    int chu_so_lon_nhat = n % 10; // Gan chu so lon nhat tam thoi

    
    while (n > 0) {
        int chu_so = n % 10; // Lay  chu so cuoi cung
        if (chu_so > chu_so_lon_nhat) {
            chu_so_lon_nhat = chu_so; // Gan lai neu tim thay chu so lon hon
        }
        n /= 10; // Loai bo chu so cuoi cung
    }

    cout << "Ch? s? l?n nh?t c?a n là: " << chu_so_lon_nhat << endl;

    return 0;
}
