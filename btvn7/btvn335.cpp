#include <stdio.h>

// ham in danh sach gia tri cua mang
void inMang(int arr[], int n) {
    printf("Danh sach gia tri cua mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;

    // nhap so phan tu cau mang
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // nhap mang 
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    inMang(arr, n);

    return 0;
}

