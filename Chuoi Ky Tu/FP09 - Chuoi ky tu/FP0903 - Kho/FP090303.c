#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAX 100

void hien_thi(char s[], int begin, int end) {
	int i;
	for(i=begin; i<=end; i++)
		printf("%c", s[i]);
}

void hien_thi_tu_dai_nhat(char s[]) {
	int max = INT_MIN;
	int max_begin = -1, max_end = -1;
	int len, i, begin;

	len = strlen(s);
	begin = 0;
	for(i=0; i<len; i++) {
		if(s[i] == ' ') {
			if(i - begin > max) {
				max = i - begin;
				max_begin = begin;
				max_end = i-1;
			}
			begin = i+1;
		}
	}
	
	if(len - begin > max) {
		max_begin = begin;
		max_end = len-1;
	}

	hien_thi(s, max_begin, max_end);
}

int main(int argc, char const *argv[])
{
	char s[MAX];
	int so_tu;

	fgets(s, sizeof(s), stdin);
	s[strlen(s)-1] = '\0';

	hien_thi_tu_dai_nhat(s);

	return 0;
}