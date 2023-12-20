#include <stdio.h>

int main(){
int user;
do{

printf("nhap mot so tu 1 den 100:");
scanf("%d",&user);
if(user<1||user>100){
printf("vui long nhap dung so hop le\n.");
}
}while(user>1||user<100);
printf("so nhap:%d hop le.\n",&user);
}


