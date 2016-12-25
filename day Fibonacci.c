#include <stdio.h>
int main(){
	int n, i, j, k;
	scanf("%d", &n);
	i = j = 1;
	printf("%d %d ", i, j);
	while(i+j<n){
		k = i + j;
		printf("%d ", k);
		i = j;
		j = k;
	}
	return 0;
}
