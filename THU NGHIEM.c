#include <stdio.h>
#include <math.h>

char ChuyenDoiHoaThuong(char c)
{
	if((c>='A') && (c<='Z'))
		c+=32;
	else if((c>='a') && (c<='z')) 
		c-=32;
	return c;
}

void GiaiPTB1(int a, int b)
{
	if(a==0)
	{
		if(b==0)
			printf("Vo so nghiem");
		else 
			printf("Vo nghiem");
	}
	else 
		printf("%.2f", (float)-b/a);
}

void GiaiPT2(float, float, float);
void GiaiPT2(float a, float b, float c)
{
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
				printf("Vo so nghiem");
			else 
				printf("Vo nghiem");
		}
		else 
			printf("Nghiem: %.2f", (float)-c/b);
	}
	else
	{
		float D = b*b-4*a*c;
		if(D<0)
			printf("Vo nghiem");
		else 
		{
			if(D>0)
			{
				printf("Nghiem: %.2f ", ((float)-b+sqrt(D))/(2*a));
				printf("Nghiem: %.2f", ((float)-b-sqrt(D))/(2*a));
			}
			else 
				printf("nghiem: %.2f", (float)-b/(2*a));
		}
	}
}

int min(int, int, int, int);
int min(int a, int b, int c, int d)
{
	int min;
	if((a<b)&&(a<c)&&(a<d))
		min = a;
	else if((b<a)&&(b<c)&&(b<d))
		min = b;
	else if((c<a)&&(c<b)&&(c<d))
		min = c;
	else min = d;
	return min;
}

int reverse(int n)
{
	int a, b;
	while(n>0)
	{
		a = n%10;
		b = b*10+a;
		n = n/10;
	}
	return b;
}

int so_doi_xung(int n)
{
	int a, b, i;
	b = 0;
	i = n;
	while(n>0)
	{
		a = n%10;
		b = b*10+a;
		n = n/10;
	}
	if(b==i)
		return 1;
	else 
		return 0;
}

int chinh_phuong(int n)
{
	if(sqrt(n)==(int)sqrt(n))
		return 1;
	else return 0;
}

int isPrime(int n)
{
	int i, c;
	c = 1;
	if(n<2)
		return c = 0;
	else 
	{
		for(i=2;i<=sqrt(n);i++)
			if(n%i==0)
			{
				return c = 0;
				break;
			}
	}
	return c;
}

int UCLN(int, int);
int UCLN(int a, int b)
{
	while(b!=a)
	{
		if(a>b)
			a = a - b;
		else 
			b = b -a;
	}
	return a;
}

int GCD(int m, int n) // ham de quy tim UCLN cua hai so
{
	if(m==n)
		return m;
	if(m>n)
		GCD(m-n, n);
	else GCD(m, n-m);
}

int main(){
    int n, m, ucln;
    scanf("%d%d", &m, &n);
    ucln = GCD(m, n);
    printf("%d", ucln);
    return 0;
}
