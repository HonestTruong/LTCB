#include <stdio.h>
#include <string.h>

#define MAX 100

int get_n_characters_from_pos(char s1[], char s2[], int n, int pos) {
	if(strlen(s1) - pos < n || pos < 0 || pos >= strlen(s1)) 
		return 0;

	int index = 0;
	while(n--) {
		s2[index++] = s1[pos++];
	}
	s2[index] = '\0';
	return 1;
}

int main(int argc, char const *argv[])
{
	char s1[MAX], s2[MAX];
	int n, pos;

	fgets(s1, sizeof(s1), stdin);
	s1[strlen(s1)-1] = '\0';
	scanf("%d%d", &n, &pos);
	if(get_n_characters_from_pos(s1, s2, n, pos))
		printf("%s", s2);
	else
		printf("Khong thuc hien duoc!");

	return 0;
}