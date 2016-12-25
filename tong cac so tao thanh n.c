#include <stdio.h>
int main(){
	int n, t, i;
	scanf("%d", &n);
	t = 0;
	while(n!=0){
		i = n%10;
		t = t + i;
		n = n /10;
	}
	printf("%d", t);
	return 0;
}
