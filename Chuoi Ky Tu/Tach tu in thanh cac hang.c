#include <stdio.h>
#include <string.h>
#define MAX 100

int tach_tu(char s[])
{
	int i, l, j=0, d=0;
	char t[MAX];
	l=strlen(s);
	for(i=0; i<=l; i++)
	{
		if(s[i]!=' ' && s[i]!='\0')
			printf("%c", s[i]);	
		else
		{
			d = d+1;
			printf("\n");
		}
	}
	return d;
}


int main()
{
	char s[MAX];
	int d;
	fgets(s, sizeof(s), stdin);
	s[strlen(s)-1]='\0';
	d=tach_tu(s);
	printf("%d", d);
	return 0;
}
