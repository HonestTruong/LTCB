#include <stdio.h>
#include <string.h>

#define MAX 100

void reverse(char s[]) {
	char tmp[MAX];
	int len, i;

	len = strlen(s);
	
	// Chuyen du lieu vao chuoi tmp
	i = 0;
	while(len--)
		tmp[i++] = s[len];

	// Chuyen du lieu tu chuoi tmp tro ve s
	len = strlen(s);
	for(i=0; i<len; i++)
		s[i] = tmp[i];
}

int main(int argc, char const *argv[])
{
	char s[MAX];

	fgets(s, sizeof(s), stdin);
	s[strlen(s)-1] = '\0';
	reverse(s);
	printf("%s", s);

	return 0;
}