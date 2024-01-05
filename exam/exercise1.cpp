#include <stdio.h>

int main() {
    int s;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &s);
    int ary[s];
    // nhap phan tu cua mang
    printf("Nhap phan tu cua mang: ");
    for (int i = 0; i < s; ++i) {
        scanf("%d", &ary[i]);
    }
    // tim so chan cuoi cung trong mang
    int so_chan_cuoi = -1;  
    for (int i = s - 1; i >= 0; --i) {
        if (ary[i] % 2 == 0) {
            so_chan_cuoi = ary[i];
            break;  
        }
    }
    //hien thi ket qua
    if (so_chan_cuoi != -1) {
        printf("So chan cuoi cung la: %d\n", so_chan_cuoi);
    } else {
        printf("khong co so chan trong mang.\n");
    }

    return 0;
}

