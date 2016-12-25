#include <stdio.h>
#include <string.h>

#define MAX 100

void lower(char s[]) {
	int i, len;

	len = strlen(s);
	for(i=0; i<len; i++)
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
}

int main(int argc, char const *argv[])
{
	char s[MAX];

	fgets(s, sizeof(s), stdin);
	s[strlen(s)-1] = '\0';
	lower(s);
	printf("%s", s);

	return 0;
}