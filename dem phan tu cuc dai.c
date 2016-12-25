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

int dem_cuc_dai(int arr[][MAX], int m, int n)
{
	int i, j;
	
}

int main()
{
	int i, j, arr[MAX][MAX], d=0;
	scanf("%d%d", &m, &n);
	nhap_ma_tran(arr, m, n);
	for(i=0;  i<m; i++)
		for(j=0; j<n; j++)
		{
			if(i==0 && j==0)
			{
				if((arr[0][0]>arr[0][1]) && (arr[0][0]>arr[1][1]))
			}
		}
}
