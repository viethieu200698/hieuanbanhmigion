#include <stdio.h>

int main(){
int n;
printf("nhap so nguyen duong n:");
scanf("%d",&n);
if(n<=1){
printf("so %d khong phai so nguyen to\n",n);
} for(int i=2;i*i<=n;i++){
	if(n%i==0){
	printf("so %d khong phai so nguyen to\n",n);
}else{

printf("so %d la so nguyen to\n",n);
}
}
}
