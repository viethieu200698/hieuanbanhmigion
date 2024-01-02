#include <stdio.h>
#include <string.h>
int main(){
	char s[20];
	printf("nhap chuoi s:\n");
	scanf("%s",s);
	int t = strlen(s);
	
	for(int i=0;i<0;i++){
		char tmp=s[i];
		s[i]=s[t-i-1];
		}
		printf("chuoi dao nguoc:%s",s);
}	
