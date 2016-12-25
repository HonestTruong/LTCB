#include <stdio.h>
int main(){
	int n, d;
	scanf("%d", &n);
	d = 0;
	while(n!=0){
		n = n/10;
		d++;
	}
	printf("%d", d);
	return 0;
}
