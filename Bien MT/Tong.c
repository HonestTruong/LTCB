#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	int a, b;
	if(argv==3){
		a=atoi(argv[1]);
		b=atoi(argv[2]);
		printf("Sum: %d", a+b);
		return 0;
	}
	else return -1;
}
