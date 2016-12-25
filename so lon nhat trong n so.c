#include <stdio.h>
int main(){
	int n, i, t, max;
	scanf("%d", &n);
	max = 0;
	for(i=1; i<=n; i++){
		scanf("%d", &t);
		if(t>max)
			max = t;
	}
	printf("%d", max);
	return 0;
}
