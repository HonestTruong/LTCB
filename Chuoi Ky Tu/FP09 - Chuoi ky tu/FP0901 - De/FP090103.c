#include <stdio.h>
#include <string.h>

#define MAX 100

int get_n_first_characters(char s1[], char s2[], int n) {
	int i;

	if(n > strlen(s1))
		return 0;
	for(i=0; i<n; i++)
		s2[i] = s1[i];
	s2[i] = '\0';
	return 1;
}

int main(int argc, char const *argv[])
{
	char s1[MAX], s2[MAX];
	int n;

	fgets(s1, sizeof(s1), stdin);
	s1[strlen(s1)-1] = '\0';
	scanf("%d", &n);
	if(get_n_first_characters(s1, s2, n))
		printf("%s", s2);
	else
		printf("n lon hon do dai chuoi s1");

	return 0;
}