#include <stdio.h>
int main(){
int kich_thuoc_mang;
printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &kich_thuoc_mang);
int ary[kich_thuoc_mang];
printf("Nhap cac phan tu cua mang:\n");
for (int i = 0; i < kich_thuoc_mang; i++)
        scanf("%d", &ary[i]);
  int so_le_cuoi_cung = -1; 

    for (int i = kich_thuoc_mang - 1; i >= 0; i--) {
        if (ary[i] % 2 != 0) {
            so_le_cuoi_cung = ary[i];
            break;
        }
    }

    if (so_le_cuoi_cung != -1) {
        printf("So le cuoi cung trong mang la: %d\n", so_le_cuoi_cung);
    } else {
        printf("Khong co so le trong mang.\n");
    }

    return 0;       
}        
