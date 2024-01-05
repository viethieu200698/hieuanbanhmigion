#include <stdio.h>

// ham tinh trung binh cong
float TBC(int arr[], int n) {
    if (n == 0) {
        return 0.0; 
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return (float)sum / n;
}

int main() {
    int n;

    // nhap so phan tu cua mang
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // nhap mang
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    float TBc = TBC(arr, n);
    printf("Trung binh cong cua mang la: %.2f\n", TBc);

    return 0;
}


