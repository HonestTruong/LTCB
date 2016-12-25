#include <stdio.h>
int main(){
	int n, i;
	float s;
	scanf("%d", &n);
	s = 0;
	for(i=1; i<=n; i++){
		s = s + (float)1/i;
	}
	printf("%.2f", s);
	return 0;
}
