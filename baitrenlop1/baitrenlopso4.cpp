#include <stdio.h>
#include <math.h>

int main(){
	int A,B,C;
do{
	
	//nhap ba so nguyen
	
printf("vui long nhap so thu nhat:");
scanf("%d",&A);

printf("vui long nhap so thu hai:");
scanf("%d",&B);

printf("vui long nhap so thu ba:");
scanf("%d",&C);
if(A+B<=C||B+C<=A||A+C<=B){
printf("ba so %d nhap vao khong la ba canh cua tam giac\n",A,B,C);}
}while ((A+B)>C&&(B+C)>A&&(A+C)>B);
printf("ba so %d nhap vao la ba canh cua tam giac\n",A,B,C);

// Tinh chu vi tam giac
int chu_vi= A+B+C;
 printf("Chu vi tam giac: %d\n", chu_vi);
 
 // Tinh dien tich tam giac theo cong thuc Heron
float p= chu_vi / 2.0;
 float dien_tich = sqrt(p * (p - A) * (p - B) * (p - C));
printf("Dien tich tam giac: %f\n", dien_tich);

}




