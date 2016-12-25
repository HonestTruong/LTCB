#include <stdio.h>
#include <string.h>

#define MAX 100

void proper(char s[]) {
	int i, len;

	len = strlen(s);
	
	// Tu dau tien
	if(s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	// Cac tu tiep theo
	for(i=1; i<len; i++)
		if(s[i] == ' ' && i+1 < len && s[i+1] >= 'a' && s[i+1] <= 'z')
			s[i+1] -= 32;
}

int main(int argc, char const *argv[])
{
	char s[MAX];

	fgets(s, sizeof(s), stdin);
	s[strlen(s)-1] = '\0';
	proper(s);
	printf("%s", s);

	return 0;
}