#include <stdio.h>
#include <string.h>
#define MAX 100

//Ham chuyen chuoi ky tu thuong sang ky tu hoa
 void upper(char s[])
{
	int i, l;
	l = strlen(s);
	for(i=0; i<l; i++)
	{
		if(s[i]>='a' && s[i]<='z')
			s[i] -=32;
	}
}

//Ham chuyen chuoi ky tu hoa sang chuoi ky thuong
void lower(char s[])
{
	int i, l;
	l = strlen(s);
	for(i=0; i<l; i++)
	{
		if(s[i]>='A' && s[i]<='Z')
			s[i] +=32;
	}
}

//Ham trich ra n ky tu dau tien cua chuoi S1 sang chuoi S2
int get_n_first_characters(char s1[], char s2[], int n)
{
	int i, l;
	l=strlen(s1);
	if(n>l)
		return 0;
	else
	{	for(i=0; i<n; i++)
		{
			s2[i] = s1[i];
		}
		s2[n]='\0';
		return 1;
	}
}

//Ham doi cac ky tu dau tien cua moi tu sang ky tu hoa
void proper(char s[])
{
	int i, l;
	l=strlen(s);
	if(s[0]>='a' && s[0]<='z')
		s[0] -=32;
	for(i=1; i<l; i++)
	{
		if(s[i]==' ')
		{
			if(s[i+1]>='a' && s[i+1]<='z')
				s[i+1] -=32;
		}	
	}
}

//Ham xoa khoang trang cua chuoi nhap tu ban phim
void don_chuoi(char s[], int i)
{
	int j, l;
	l=strlen(s);
	for(j=i; j<l; j++)
		s[j]=s[j+1];
}
void xoa_khoang_trang(char s[])
{
	int i, l, j=0;
	char t[MAX];
	l=strlen(s);
	for(i=0; i<l; i++)
	{
		if(s[i]!=' ')
		{
			don_chuoi(s, i);
		}
	}
	printf("%s", s);
}
//int main()
//{
//	char s[MAX];
//	fgets(s, sizeof(s), stdin);
//	s[strlen(s)-1]='\0';
//	xoa_khoang_trang(s);
//	return 0;
//}

//Ham doi xen ke chu hoa chu thuong
void xen_ke(char s[])
{
	int i, l;
	l=strlen(s);
	for(i=0; i<l; i++)
	{
		if(i%2==0)
			if(s[i]>='a' && s[i]<='z')
				s[i] -=32;
		if(i%2==1)
			if(s[i]>='A' && s[i]<='Z')
				s[i] +=32;
	}
}


//int main()
//{
//	char s[MAX];
//	fgets(s, sizeof(s), stdin);
//	s[strlen(s)-1]='\0';
//	xen_ke(s);
//	printf("%s", s);
//	return 0;
//}


//Ham trich n ky tu cuoi cua chuoi s1 chuyen sang s2
int get_n_last_characters(char s1[], char s2[], int n)
{
	int i, l, j=0;
	l=strlen(s1);
	if(n>l)
		return 0;
	else
	{
		for(i=l-n; i<l; i++)
		{
			s2[j++]=s1[i];
		}
		s2[n]='\0';
	printf("%s\n", s2);
		return 1;
	}
}
//int main()
//{
//	int i, n;
//	char s1[MAX], s2[MAX];
//	fgets(s1, sizeof(s1), stdin);
//	s1[strlen(s1)-1] = '\0';
//	scanf("%d", &n);
//	i = get_n_last_characters(s1, s2, n);
//	printf("%d", i);
//	return 0;
//}


//Ham trich ra n ky tu bat dau tu vi tri pos
int get_n_characters_from_pos(char s1[], char s2[], int n, int pos)
{
	int i, l, j=0;
	l=strlen(s1);
	if(n>=l || pos<0 || pos>(l-n))
		return 0;
	else
	{
		for(i=pos; i<pos+n; i++)
		{
			s2[j++]=s1[i];
		}
		s2[n]='\0';
		printf("%s\n", s2);
		return 1;
	}
}
//int main()
//{
//	int i, n, pos;
//	char s1[MAX], s2[MAX];
//	fgets(s1, sizeof(s1), stdin);
//	s1[strlen(s1)-1] = '\0';
//	scanf("%d%d", &n, &pos);
//	i=get_n_characters_from_pos(s1, s2, n, pos);
//	printf("%d", i);
//	return 0;
//}

//ham dao nguoc cac ky tu trong chuoi
void reverse(char s[])
{
	int i, l, j=0;
	l=strlen(s);
	char t[MAX];
	for(i=l-1; i>=0; i--)
	{
		t[j++]=s[i];
	}
	t[j]='\0';
//	printf("%s", t);

	for(i=0; i<j; i++)
	{
		s[i]=t[i];
	}
	s[j]='\0';
}
//int main()
//{
//	char s[MAX];
//	fgets(s, sizeof(s), stdin);
//	s[strlen(s)-1]='\0';
//	reverse(s);
//	printf("%s", s);
//	return 0;
//}

//chua hoa chuoi
void standard(char s[])
{
	int i, l;
	l=strlen(s);
	for(i=0; i<l; i++)
	{
		if(s[i]==' ' && s[i+1]==' ')
			don_chuoi(s, i);
	}
	if(s[0]==' ')
		don_chuoi(s, 0);
	if(s[l-1]==' ')
		don_chuoi(s, l-1);
	printf("%s", s);
}

//int main()
//{
//	char s[MAX];
//	fgets(s, sizeof(s), stdin);
//	s[strlen(s)-1]='\0';
//	standard(s);
//	return 0;
//}
