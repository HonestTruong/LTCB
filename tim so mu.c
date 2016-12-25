#include <stdio.h>
#include <math.h>
int main(){
	int n, i, t;
	scanf("%d", &n);
	i = 0;
	t = 1;
	while(t<=n){
		i++;
		t = t*2;
	}
	printf("%d", i);
	return 0; 
}
