#include <stdio.h>
#include <string.h>

#define MAX 100

void xen_ke(char s[]) {
	int len, i;

	len = strlen(s);
	for(i=0; i<len; i++) {
		if(i % 2 == 0) {
			if(s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		else {
			if(s[i] >= 'A' && s[i] <= 'Z')
				s[i] += 32;
		}
	}
}

int main(int argc, char const *argv[])
{
	char s[MAX];

	fgets(s, sizeof(s), stdin);
	s[strlen(s)-1] = '\0';	
	xen_ke(s);
	printf("%s", s);

	return 0;
}