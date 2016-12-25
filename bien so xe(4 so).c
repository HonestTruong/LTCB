#include <stdio.h>
int main(){
	int n, a, b, c, d;
	scanf("%d", &n);
	d = n%10;
	n = n/10;
	c = n%10;
	n = n/10;
	b = n%10;
	n = n/10;
	a = n%10;
	printf("%d", (a+b+c+d)%10);
	return 0;
}
