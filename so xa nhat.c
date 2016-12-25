#include <stdio.h>
#include <>
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

int main()
{
	int n, a[MAX], i;
	scanf("%d", &n);
	nhap_mang(a, n);
	
	
}
