#include <stdio.h>
int main(){
	int n, i, s;
	scanf("%d", &n);
	s = 0;
	for(i=1; i<=n; i++){
		s = s + i*i;
	}
	printf("%d", s);
	return 0;
}
