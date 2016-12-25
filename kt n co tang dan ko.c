#include <stdio.h>
int main(){
	int n, a, b, c;
	scanf("%d", &n);
	c = 1;
	while(n!=0){
			a = n%10;
			n = n/10;
			b = n%10;
			if(a<b){
				c = 0;
				break;
			}
	}
	if(c==1)
		printf("1");
	else 
		printf("0");
	return 0;
}
