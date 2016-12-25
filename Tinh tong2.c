#include <stdio.h>
int main(){
	int n, i;
	float t;
	scanf("%d", &n);
	t = 0;
	for(i=1; i<=n; i++){
	t = t + (float)i/(i+1);
	}
	printf("%.2f", t);
	return 0;
}
