#include <stdio.h>

int main() {
    int n;

    // nhap kich thuoc cua mang
    do {
        printf("Nhap so luong phan tu cua mang (n > 0): ");
        scanf("%d", &n);
    } while (n <= 0);

    int arr[n];

    // nhap cac phan tu cua mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // dao nguoc thu tu cac phan tu trong mang
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    
    printf("Mang sau khi dao nguoc la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

