#include <stdio.h>
int main(){
	int a, b;
	char ch;
	scanf("%d%d", &a, &b);
	fflush(stdin);
	scanf("%c", &ch);
	if(ch == '+')
		printf("%d", a+b);
	else{
		if(ch == '-')
			printf("%d", a-b);
		else{
			if(ch == '*')
				printf("%d", a*b);
			else{
				if(ch == '/')
					printf("%.2f", (float) a / b);
				else
					printf("Error");
			}
		}
	}
	return 0;
}
