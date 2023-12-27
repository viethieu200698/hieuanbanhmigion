#include <stdio.h>
#include <stdlib.h>

// ham tinh khoang cach hai so nguyen
int calculateDistance(int a, int b) {
    return abs(a - b);
}

// ham tinh gia tri gan nhat trong mang
int findClosestValue(int arr[], int n, int x) {
    // neu mang rong, tra ve gia tri khong hop le
    if (n == 0) {
        printf("Mang rong. Khong tim thay gia tri.\n");
        return -1;
    }

    // khoi tao gia tri gan nhat va khoang cach tuong ung
    int closestValue = arr[0];
    int midDistance = calculateDistance(arr[0], x);

    // duyet qua mang de tim gia tri gan nhat
    for (int i = 1; i < n; i++) {
        int distance = calculateDistance(arr[i], x);
        if (distance < midDistance) {
            midDistance = distance;
            closestValue = arr[i];
        }
    }

    return closestValue;
}

int main() {
    // nhap so phan tu cua mang
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    // kiem tra n phai la so duong
    if (n <= 0) {
        printf("So phan tu cua mang phai la so duong.\n");
        return 1; 
    }

    // nhap mang so nguyen
    int arr[n];
    printf("Nhap mang so nguyen n: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // nhap so nguyen x
    int x;
    printf("Nhap so nguyen x: ");
    scanf("%d", &x);

    // tim gia tri xa x nhat
    int result = findClosestValue(arr, n, x);

    
    if (result != -1) {
        printf("Gia tri trong mang xa gia tri %d nhat la: %d\n", x, result);
    }

    return 0; 
}

