#include <stdio.h>
int main(){
	int a, b, i;
	
	for(i=10; i<=99; i++){
		int c = i;
		a = c%10;
		c = c/10;
		b = c%10;
		if((a*b)==(2*(a+b)))
			printf("%d ", i);
	}
	return 0;
}
