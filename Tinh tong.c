#include <stdio.h>
int main(){
	int n, i, t;
	scanf("%d", &n);
	t = 0;
	for(i=1; i<=n; i++){
		t = t + i;
	}
	printf("%d", t);
	return 0;
}
