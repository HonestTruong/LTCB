#include <stdio.h>
#include <string.h>

#define MAX 100

void delete_character(char s[], int index) {
	int i, len;

	len = strlen(s);
	for(i=index; i<len-1; i++)
		s[i] = s[i+1];
	s[len-1] = '\0';
}

int main(int argc, char const *argv[])
{
	int len, i;
	char s[MAX];

	fgets(s, sizeof(s), stdin);
	s[strlen(s)-1] = '\0';
	len = strlen(s);
	for(i=0; i<len; i++)
		if(s[i] == ' ') {
			delete_character(s, i);
			i--;
			len--;
		}
	printf("%s", s);

	return 0;
}