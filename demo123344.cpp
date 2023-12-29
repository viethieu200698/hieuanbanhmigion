#include <stdio.h>
#include <math.h>
float chu_vi_tam_giac(float a,float b,float c){
	return a+b+c;
	}
float tinhDienTichTamGiac(float a, float b, float c) {
    float p = chu_vi_tam_giac/2.0;
    return  sqrt(p * (p - a) * (p - b) * (p - c));

	}
int tinhTongChuSo(int n) {
    int tong = 0;

    while (n != 0) {
        int chuSo = n % 10;  
        tong += chuSo;
        n /= 10;  
    }

    return tong;
}
		
int timUCLN(int a, int b) {
    for(int i=a;i>0:i--){
    	if(a%i==0&&b%i==0){
    	return i;
			}
		}
		return 1;    	
    }	

int timBCNN(int a, int b) {
    for(int i=a; ;i++){
    	if(i%a==0&&i%b==0){
    		return i;
		}	
	}	   	    	
}
//tim so lon nhat trong mang so nguyen
int max(int arr[],int n){
	int h = arr[0];
	for(int i=1;i<n;i++){
		if(h<ar[i]){
			h=arr[i];
			}
		}
		return h;
	}
//viet ham nhap cac gia tri cho mot mang n so nguyen
void nhapMang(int arr[], int n) {
    printf("Nhap cac gia tri cho mang:\n");

    for (int i = 0; i < n; i++) {
        printf("Nhap gia tri thu %d: ", i + 1);
        scanf("%d", &arr[i]);
        }
}
int main(){



}
