#include <stdio.h>

int main() {
    char KyTu;
    
    // nhap ky tu nguoi dung
    printf("nhap mot ky tu:");
    scanf("%c",&KyTu);
    
    // kiem tra ky tu
    if((KyTu>='A'&&KyTu<='Z')){
    	printf("ky tu nhap vao la: in hoa.\n");
    	}else if
		((KyTu>='a'&&KyTu<='z')){
		printf("ky tu nhap vao la: in thuong.\n");
			}else if
		((KyTu>='0'&&KyTu<='9')){
		printf("ky tu nhap vao la: so.\n");	
		}else {
		printf("ky tu nhap vao la: ky tu dac biet.\n");
			}
			
		
		
		
		}
