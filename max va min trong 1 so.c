#include <stdio.h>
#include <limits.h>
int main(){
	int n, a, max, min;
	scanf("%d", &n);
	max = INT_MIN;
	min = INT_MAX;
	while(n!=0){
		a = n%10;
		if(a>max)
			max = a;
		if(a<min)
			min = a;
		n = n/10;
	}
	printf("%d %d", max, min);
	return 0;
}
