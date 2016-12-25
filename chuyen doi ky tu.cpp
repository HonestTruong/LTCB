#include <stdio.h>
int main(){
	char ch;
//	printf("Nhap vao mot ky tu chu cai bat ky:\n");
	scanf("%c", &ch);
	if(ch>='A' && ch<='Z')
		ch = ch +32;
	else{
		if(ch>='a' && ch<='z')
			ch = ch - 32;
	}
	printf("%c", ch);
	return 0;
}
