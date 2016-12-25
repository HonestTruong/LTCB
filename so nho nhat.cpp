#include <stdio.h>
int main(){
	int a, b, c, d, min;
	scanf("%d", &a);
	min = a;
	scanf("%d", &b);
	if(min>b)
		min = b;
	scanf("%d", &c);
	if(min>c)
		min = c;
	scanf("%d", &d);
	if(min>d)
		min = d;
	printf("%d", min);
	return 0;
}
