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

    int dem_so_am = 0, dem_so_duong = 0;

    // dem so luong so am va so duong trong mang
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            dem_so_am++;
        } else if (arr[i] > 0) {
            dem_so_duong++;
        }
    }

    // in ket qua
    printf("So luong so am trong mang la: %d\n", dem_so_am);
    printf("So luong so duong trong mang la: %d\n", dem_so_duong);

    return 0;
}

