#include <stdio.h>
#include <string.h>
int main(){
	char s[20];
	printf("nhap chuoi s:\n");
	fgets(s,sizeof(s),stdin);
	int t = strlen(s);
	printf("chuoi dao nguoc:");
	for(int i=t-1;i>=0;i--){
		printf("%c",s[i]);
		}
		return 0;
}	
