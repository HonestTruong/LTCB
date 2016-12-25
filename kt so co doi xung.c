#include <stdio.h>
int main(){
	int n, a, b, c;
	scanf("%d", &n);
	a = n;
	c = 0;
	while(a!=0){
		b = a%10;
		c = c*10 + b;
		a = a/10;
	}
	if(c == n)
		printf("Doi xung");
	else 
		printf("Khong doi xung");
	return 0;
}
