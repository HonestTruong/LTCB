#include <stdio.h>
#include <string.h>
#define MAX 100


int main()
{
	char s1[MAX], s2[MAX];
	fgets(s1, sizeof(s1), stdin);
	s1[strlen(s1)-1] = '\0';
	fgets(s2, sizeof(s2), stdin);
	s2[strlen(s2)-1] = '\0';
	strcat(s1, s2);
	printf("%s", s1);
	return 0;
}

