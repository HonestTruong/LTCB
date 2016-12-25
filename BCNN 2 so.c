#include <stdio.h>
int main(){
	int a, b, tmp;
	scanf("%d%d", &a, &b);
	tmp = a*b;
	while(a!=b){
		if(a>b)
			a = a - b;
		else 
			b = b - a;
	}
	printf("%d", tmp/a);
	return 0;
}
