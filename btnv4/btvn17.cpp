#include <stdio.h>
int main(){
int kich_thuoc_mang;
printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &kich_thuoc_mang);
int ary[kich_thuoc_mang];
printf("Nhap cac phan tu cua mang:\n");
for (int i = 0; i < kich_thuoc_mang; i++)
        scanf("%d", &ary[i]);
  int tong_so_duong_hien_tai = 0;
    int tong_so_duong_max = 0;

    for (int i = 0; i < kich_thuoc_mang; i++) {
        if (ary[i] > 0) {
            tong_so_duong_hien_tai += ary[i];

            if (tong_so_duong_hien_tai > tong_so_duong_max) {
                tong_so_duong_max = tong_so_duong_hien_tai;
            }
        } else {
            tong_so_duong_hien_tai = 0;
        }
    }

    printf("Tong so duong lon nhat la: %d\n", tong_so_duong_max);

    return 0;       
}        
