#include <stdio.h>
#include <limits.h>
#define MAX 100

void nhap_ma_tran(int arr[][MAX], int m, int n)
{
	int i, j;
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			scanf("%d", &arr[i][j]);
}

int tong_nua_tren_duong_cheo_chinh(int arr[][MAX], int m, int n)
{
	int i, j, t=0;
	if(m!=n)
		return INT_MIN;
	else{
		for(i=m-1; i<=m-2; i++)
		{
			j=n-1;
			while((i+j)>(n-1))
			{
				t = t+arr[i][j];
				j--;
			}
		}
	}
	return t;
}

int main()
{
	int arr[MAX][MAX], m, n, t;
	scanf("%d%d", &m, &n);
	nhap_ma_tran(arr, m, n);
	t = tong_nua_tren_duong_cheo_chinh(arr, m, n);
	printf("%d", t);
	return 0;
}
