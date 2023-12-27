#include <stdio.h>
#include <limits.h>

// Hàm tìm khoang [a, b] chua tat ca cac gia tri trong mang
void findRange(int arr[], int n, int *a, int *b) {
    
    if (n == 0) {
        printf("Mang rong. Khong tim thay khoang.\n");
        *a = *b = 0; 
        return;
    }
    // Khoi tao gia tri nho nhat và lon nhat
    *a = *b = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < *a) {
            *a = arr[i];
        } else if (arr[i] > *b) {
            *b = arr[i];
        }
    }
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    // kiem tra n phai la so duong
    if (n <= 0) {
        printf("So phan tu cua mang phai la so duong.\n");
        return 1; 
    }
    int arr[n];
    printf("Nhap mang so nguyen n ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int a, b;

    // Tim khoang [a, b]
    findRange(arr, n, &a, &b);
    
    printf("Doan [a, b] chua tat ca cac gia tri trong mang la: [%d, %d]\n", a, b);

    return 0; 
}

