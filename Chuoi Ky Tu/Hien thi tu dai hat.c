#include <stdio.h>
#include <string.h>
#include <limits.h>
#define MAX 100

void hien_thi_tu_dai_nhat(char s[])
{
	int i, l, max, x, bd, kt, d=0;
	l=strlen(s);
	max=INT_MIN;
	x=0;
	for(i=0; i<=l; i++)
	{
		if(s[i]==' '|| s[i]=='\0')
		{
			d = i-x;
			if(d>max)
			{
				max=d;
				bd=x;
				kt=i-1;
			}
			x=i+1;
		}	
	}
//	if(l-x>max)
//	{
//		bd=x;
//		kt=l-1;
//	}
	for(i=bd; i<=kt; i++)
	{
		printf("%c", s[i]);
	}
}


int main()
{
	char s[MAX];
	int d;
	fgets(s, sizeof(s), stdin);
	s[strlen(s)-1]='\0';
	hien_thi_tu_dai_nhat(s);
//	printf("%d", d);
	return 0;
}
