#include <stdio.h>
#include <math.h>
int main(){
	int n, i, c;
	scanf("%d", &n);
	c = 1;
	if(n<2)
		c = 0;
	else{
		for(i=2; i<=(int)sqrt(n); i++){
			if(n%i==0){
				c = 0;
				break;
			}
		}
	}
	if(c==1)
		printf("Nguyen to");
	else 
		printf("Khong nguyen to");
	return 0;
}
