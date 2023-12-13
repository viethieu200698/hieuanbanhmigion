#include <stdio.h>
int main(){
	// nhap nam can kiem tra
	int nam;
	printf("nap nam");
	scanf("%d",&nam);
	
	// kiem tra nam nhap vao co phai nam nhuan hay khong
	if((nam%4==0&&nam%100!=0)||(nam%400==0)){
		printf("%d la nam nhuan.\n",nam);
		
		}else{
		printf("%d khong phai la nam nhuan.\n",nam);
		}	
	}
