#include <stdio.h>
//ham dao nguoc cac phan tu trong mang
int daoNguoc(int arr[],int n){
	int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    
    

    return temp;
}
void inMang(int arr[], int n) {
    printf("Danh sach gia tri cua mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}	
int main() {
    int n;

    // nhap so phan tu cua mang
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    //nhap mang
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Mang truoc khi dao nguoc: ");
    inMang(arr, n);

    daoNguoc(arr, n);

    printf("Mang sau khi dao nguoc: ");
    inMang(arr, n);

    return 0;
}	

	
