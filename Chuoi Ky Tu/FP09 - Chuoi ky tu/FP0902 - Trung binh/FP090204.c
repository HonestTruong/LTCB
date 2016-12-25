#include <stdio.h>
#include <string.h>

#define MAX 100

int main(int argc, char const *argv[])
{
	int len1, len2, i, index;
	char s1[MAX], s2[MAX];

	fgets(s1, sizeof(s1), stdin);
	s1[strlen(s1)-1] = '\0';
	fgets(s2, sizeof(s2), stdin);
	s2[strlen(s2)-1] = '\0';
	
	len1 = strlen(s1);
	len2 = strlen(s2);

	if(len1 + len2 > MAX) 
		printf("Not enough!");
	else {
		index = len1;
		for(i=0; i<len2; i++)
			s1[index++] = s2[i];
		s1[index] = '\0';

		printf("%s", s1);
	}
	

	return 0;
}