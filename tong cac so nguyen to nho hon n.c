#include <stdio.h>
#include <math.h>
int main(){
    int n, i, j, t;
    t = 0;
    
    scanf("%d", &n);
    
    for (i=2; i<n; i++){
    	int c = 1;
		if(i<2)
			c = 0;
		else {
			for(j=2; j<=(int)sqrt(i); j++){
				if(i%j==0){
					c = 0;
					break;
				}
			}
		}
		if(c==1)
			t = t + i;
	}
    
    printf("%d", t);
    
    return 0;
}
