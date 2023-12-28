#include <stdio.h>


int isTriangle(int a, int b, int c) {
    return a + b > c && a + c > b && b + c > a;
}

int main() {
    int n;

    
    do {
        printf("Nhap so luong phan tu cua mang (n > 2): ");
        scanf("%d", &n);
    } while (n <= 2);

    int arr[n];

    
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    printf("Cac day 3 so lam 3 canh cua tam giac la:\n");
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (isTriangle(arr[i], arr[j], arr[k])) {
                    printf("%d, %d, %d\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }

    return 0;
}

