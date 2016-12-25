#include <stdio.h>
#include <math.h>
#define MAX 100

void nhap_mang(int  a[], int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
}

void xuat_mang(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ", a[i]);
}

int so_ngto(int n)
{
	int i;
	if(n<2)
		return 0;
	else
		for(i=2; i<=(int)sqrt(n); i++)
			if(n%i==0)
				return 0;
	return 1;
}


int main()
{
	int a[MAX], b[MAX], i,n;
	scanf("%d", &n);
	nhap_mang(a, n);
	printf("A: ");
	xuat_mang(a, n);
	printf("\nB: ");
	for(i=0; i<n; i++)
	{
		if(so_ngto(a[i])==1)
			printf("%d ", a[i]);
	}
	return 0;
}
