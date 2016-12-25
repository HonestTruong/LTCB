#include <stdio.h>
int main(){
	int i;
	float s, t;
	scanf("%f", &s);
	t = 0;
	i = 1;
	while(t<=s){
		t = t + (float)1/i;
		i++;
	}
	printf("%d", i-1);
	return 0;
}
