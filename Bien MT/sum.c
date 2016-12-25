#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	int i, sum=0;
	if(argc>=1){
		for(i=1; i<=argc-1; i++)
			sum+=atoi(argv[i]);
		printf("sum: %d", sum);
		return 0;
	}
	else return -1;
}	
