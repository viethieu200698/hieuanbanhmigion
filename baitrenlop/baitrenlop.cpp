#include <stdio.h>
#include <math.h>

int main() {
    // Nhap he so a, b, c
   float a,b,c;

    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);
   
   // Tinh delta
   float delta = b*b - 4*a*c;
   // Kiem tra gia tri delta
   if (delta>0){
   	// nghiem thu nhat
   	float x1 = (-b + sqrt(delta)) / (2 * a);
   	// nghiem thu hai
    float x2 = (-b - sqrt(delta)) / (2 * a);
    printf("phuong trinh co hai nghiem thuc phan biet:\n");
    printf("x1=%.2f",x1);
    printf("x2=%.2f",x2);
    
   }else{
   	printf("phuong trinh vo nghiem.\n");
   }
    }
