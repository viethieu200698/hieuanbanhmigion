#include <stdio.h>
#include <math.h>

int main(){
	
	//nhap ba so nguyen
	int A;
printf("vui long nhap so thu nhat:");
scanf("%d",&A);
int B;
printf("vui long nhap so thu hai:");
scanf("%d",&B);
int C;
printf("vui long nhap so thu ba:");
scanf("%d",&C);

int Max;
Max = A;

if(B+C>Max){
	printf("tam giac hop le\n");
// Tinh chu vi tam giac
int chu_vi= A+B+C;
 printf("Chu vi tam giac: %d\n", chu_vi);
 
 // Tinh dien tich tam giac theo cong thuc Heron
float p= chu_vi / 2.0;
 float dien_tich = sqrt(p * (p - A) * (p - B) * (p - C));
printf("Dien tich tam giac: %f\n", dien_tich);
}else{printf("Tam giac khong hop le\n");
}

}

