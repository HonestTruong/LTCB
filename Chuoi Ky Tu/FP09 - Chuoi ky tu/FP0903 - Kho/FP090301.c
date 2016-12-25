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

int delete_space(char s[], int index) {
	int len, count = 0;

	len = strlen(s);
	while(index+1 < len && s[index+1] == ' ') {
		delete_character(s, index+1);
		count++;
	}

	return count;
}

void standard(char s[]) {
	int i, len;

	len = strlen(s);

	// Xoa cac khoang trang dau chuoi
	while(s[0] == ' ') {
		delete_character(s, 0);
		len--;
	}

	// Xoa cac khoang trang giua cac tu
	for(i=0; i<len; i++) {
		if(s[i] == ' ')
			len -= delete_space(s, i);
	}

	// Xoa cac khoang trang cuoi chuoi
	while(len-1 >= 0 && s[len-1] == ' ') {
		delete_character(s, len-1);
		len--;
	}
}

int main(int argc, char const *argv[])
{
	char s[MAX];

	fgets(s, sizeof(s), stdin);
	s[strlen(s)-1] = '\0';
	standard(s);
	printf("%s", s);

	return 0;
}