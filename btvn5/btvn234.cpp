#include <stdio.h>
#include <stdlib.h>

// ham tinh khoang cach hai so nguyen
int calculateDistance(int a, int b) {
    return abs(a - b);
}

// ham tinh gia tri xa nhat trong mang
int findFarthestValue(int arr[], int n, int x) {
    // neu mang rong, tra ve gia tri khong hop le
    if (n == 0) {
        printf("Mang rong. Khong tim thay gia tri.\n");
        return -1;
    }

    // khoi tao gia tri xa nhat va khoang cach tuong ung
    int farthestValue = arr[0];
    int maxDistance = calculateDistance(arr[0], x);

    // duyet qua mang de tim gia tri xa nhat
    for (int i = 1; i < n; i++) {
        int distance = calculateDistance(arr[i], x);
        if (distance > maxDistance) {
            maxDistance = distance;
            farthestValue = arr[i];
        }
    }

    return farthestValue;
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
    int result = findFarthestValue(arr, n, x);

    
    if (result != -1) {
        printf("Gia tri trong mang xa gia tri %d nhat la: %d\n", x, result);
    }

    return 0; 
}

