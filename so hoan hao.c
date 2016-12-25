#include <stdio.h>
int main(){
    int n, i, t;
    t = 0;
    scanf("%d", &n);
    for (i=1; i<n; i++){
        if(n % i == 0)
        	t = t + i;
    }
    if(t==n)
        printf("Yes");
    else
		printf("No");
    return 0;
}
