#include <stdio.h>
int main(){
int kich_thuoc_mang;
printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &kich_thuoc_mang);
int ary[kich_thuoc_mang];
printf("Nhap cac phan tu cua mang:\n");
for (int i = 0; i < kich_thuoc_mang; i++)
        scanf("%d", &ary[i]);
 int dem_so_duong = 0;
    int max_dem = 0;

    for (int i = 0; i < kich_thuoc_mang; i++) {
        if (ary[i] > 0) {
            dem_so_duong++;

            if (dem_so_duong > max_dem) {
                max_dem = dem_so_duong;
            }
        } else {
            dem_so_duong = 0;
        }
    }

    printf("So luong so duong lien tiep nhieu nhat la: %d\n", max_dem);

    return 0;       
}        
