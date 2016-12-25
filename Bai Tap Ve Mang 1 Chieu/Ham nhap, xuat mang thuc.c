#include <stdio.h>
#define MAX 100

void nhap_mang(float a[], int n)
{
	int i;
	for(i=0;i<n;i++)
		sanf("%f", &a[i]);
}

void xuat_mang(float a[], int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%.2f ", a[i]);
}
