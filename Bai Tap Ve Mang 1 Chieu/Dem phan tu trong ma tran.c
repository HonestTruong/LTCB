#include <stdio.h>
#include <limits.h>
#include <math.h>
#define MAX 100


void nhap_ma_tran(int arr[][MAX], int m, int n)
{
	int i, j;
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			scanf("%d", &arr[i][j]);
}

void xuat_ma_tran(int arr[][MAX], int m, int n)
{
	int i, j;
	for(i=0; i<m; i++)
	{	for(j=0; j<n; j++)
			printf("%2d ", arr[i][j]);
		printf("\n");
	}	
}

int kiem_tra(int x, int a[MAX], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(x==a[i])
			return 1;
		else
			return 0;
	}
}

void xuat_mang(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
}

int count_number_of_values(int arr[][MAX], int m, int n)
{
	int i, j, k, a[MAX], size=0, dem=0;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			for(k=0; k<=size; k++)
			{
				if(kiem_tra(arr[i][j], a, size)==0)
					a[size++] = arr[i][j];
			}
			dem++;	
		}
	}
	return dem;
	xuat_mang(a, size);
}

int main()
{
	int arr[MAX][MAX], a[MAX], m, n, p;
	scanf("%d%d", &m ,&n);
	nhap_ma_tran(arr, m, n);
	p = count_number_of_values(arr, m ,n);
	printf("%d", p);
	return 0;
}
