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
    
    printf("Cac so trung lap trong mang la:\n");

    // tim va in cac so trung lap
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break; 
            }
        }
    }
}
