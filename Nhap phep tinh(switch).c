#include <stdio.h>
int main(){
	int a, b;
	char ch;
	scanf("%d%d", &a, &b);
//	fflush(stdin); cau lenh nay khong chay duoc tren he thong cham tu dong.
	getchar();
//	scanf("%c", &ch); cau lenh nay co the chay chung voi cau lenh getchar();
	ch = getchar(); 
	switch(ch){
		case '+': printf("%d", a+b); break;
		case '-': printf("%d", a-b); break;
		case '*': printf("%d", a*b); break;
		case '/': printf("%.2f", (float)a/b); break;
		default : printf("Error");
	}
	return 0;
}
