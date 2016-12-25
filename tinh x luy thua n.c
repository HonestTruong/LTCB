#include <stdio.h>
int main(){
	int n, i, x, g;
	scanf("%d%d", &x, &n);
	g = 1;
	for(i=1; i<=n; i++){
		g = g*x;
	}
	printf("%d", g);
	return 0;
}
