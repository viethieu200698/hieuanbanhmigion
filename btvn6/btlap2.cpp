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
    int max_count = 0, max_value = arr[0];
    for (int i = 0; i < n; i++) {
        int current_value = arr[i];
        int current_count = 1;

        // Ðem so lan xuat hien cua gia tri hien tai
        for (int j = i + 1; j < n; j++) {
            if (arr[j] == current_value) {
                current_count++;
            }
        }

        // so sanh voi gia tri xuat hien nhieu nhat hien tai
        if (current_count > max_count) {
            max_count = current_count;
            max_value = current_value;
        }
    }

    // In gia tri xuat hien nhieu nhat 
    printf("Gia tri xuat hien nhieu nhat la: %d, xuat hien %d lan.\n", max_value, max_count);

    return 0;
}
