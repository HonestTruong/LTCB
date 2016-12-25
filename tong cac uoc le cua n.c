#include <stdio.h>
int main(){
	int n, i, t;
	scanf("%d", &n);
	t = 0;
	for(i=1; i<=n; i++){
		if(n % i == 0){
			if(i % 2 != 0)
				t = t + i;
			}
		}
	printf("%d", t);	
	return 0;
	}

