#include <stdio.h>
//tim uoc chung lon nhat cua hai so
int timUCLN(int a, int b) {
    for(int i=a;i>0;i--){
    	if(a%i==0&&b%i==0){
    	return i;
			}
		}
		return 1;    	
    }	
// ham tim uoc chung lon nhat cua mang
int uclnm(int arr[], int n) {
    if (n <= 0) {
        return -1; 
    }

    int umax = arr[0];

    for (int i = 1; i < n; i++) {
        umax = timUCLN(umax, arr[i]);
    }    
    return umax;
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

    int umax = uclnm(arr, n);

    if (umax != -1) {
        printf("Uoc chung lon nhat cua cac phan tu trong mang la: %d\n", umax);
    } else {
        printf("Mang rong, khong co uoc chung lon nhat.\n");
    }

    return 0;
}    
