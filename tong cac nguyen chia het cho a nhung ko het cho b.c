#include <stdio.h>
int main(){
	int n, a, b, i, t;
	t = 0;
	do {
		scanf("%d%d%d", &n, &a, &b);
	} while(a>n && b>n);
	for(i=1; i<n; i++){
		if(i%a==0 && i%b!=0)
			t = t + i;
	}
	printf("%d", t);
	return 0;
}
