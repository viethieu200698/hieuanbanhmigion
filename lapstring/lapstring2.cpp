#include <stdio.h>
#include <string.h>
int main(){
	char s[20];
	printf("nhap chuoi s:\n");
	fgets(s,sizeof(s),stdin);
	strupr(s);
	printf("chuoi viet hoa:%s",s);
	return 0;
}	
