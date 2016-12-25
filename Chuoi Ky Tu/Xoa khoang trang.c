#include <stdio.h>
#include <string.h>
#define MAX 100

void don_chuoi(char s[], int i)
{
	int j, l;
	l=strlen(s);
	for(j=i; j<l; j++)
		s[j]=s[j+1];
	s[l-1]='\0';
}
void khoang_trang_dau_chuoi(char s[])
{
	int i, l;
	l=strlen(s);
	for(i=0; i<l; i++)
	{
		if(s[i]==' '){
			don_chuoi(s, i);
			i--;
		}
		else break;
	}
}

void khoang_trang_cuoi_chuoi(char s[])
{
	int i, l;
	l=strlen(s);
	if(s[l-1]==' ')
		don_chuoi(s, l-1);
}
void xoa_khoang_trang(char s[])
{
	int i, l, j;
	l=strlen(s);
	khoang_trang_dau_chuoi(s);
	for(i=0; i<l; i++)
		{
			if(s[i]==' ' && s[i+1]==' '){
				don_chuoi(s, i);
				i--;				
			}
		}
	khoang_trang_cuoi_chuoi(s);
	printf("%s", s);
}

int main()
{
	char s[MAX];
	fgets(s, sizeof(s), stdin);
	s[strlen(s)-1] = '\0';
	xoa_khoang_trang(s);
	return 0;
}
