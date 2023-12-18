#include <iostream>
using namespace std;

int main() {
    int n;
    float S = 0.0; // Khoi tao tong S

    cout << "Nhap n: ";
    cin >> n;

    // Tinh tong S tu 1 den n
    for (int i = 1; i <= n; ++i) {
        S += 1.0 / i;
    }

    cout << "Tong S = " << S << endl;

    return 0;
}

