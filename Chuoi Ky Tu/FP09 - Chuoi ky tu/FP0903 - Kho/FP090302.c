#include <stdio.h>
#include <string.h>

#define MAX 100

void hien_thi(char s[], int begin, int end) {
	int i;
	for(i=begin; i<=end; i++)
		printf("%c", s[i]);
}

int tach_tu(char s[]) {
	int count = 0;
	int len, i, begin;

	len = strlen(s);
	begin = 0;
	for(i=0; i<len; i++) {
		if(s[i] == ' ') {
			hien_thi(s, begin, i-1);
			printf("\n");
			begin = i+1;
			count++;
		}
	}
	hien_thi(s, begin, len-1);
	printf("\n");
	count++;
	return count;
}

int main(int argc, char const *argv[])
{
	char s[MAX];
	int so_tu;

	fgets(s, sizeof(s), stdin);
	s[strlen(s)-1] = '\0';

	so_tu = tach_tu(s);
	printf("%d", so_tu);

	return 0;
}