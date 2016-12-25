#include <stdio.h>
#define MAX 100

void nhap_ma_tran(int arr[][MAX], int m, int n)
{
	int i, j;
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			scanf("%d", &arr[i][j]);
}

int kiem_tra(int x, int a[MAX*MAX], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(a[i]==x)
			return 1;
	}
	return 0;
}

int count_number_of_values(int arr[][MAX], int m, int n)
{
	int i, j, a[MAX*MAX], size=0;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			if(kiem_tra(arr[i][j], a, size)==0)
				a[size++] = arr[i][j];
	}
	return size;
}

int main()
{
	int arr[MAX][MAX], m, n, dem;
	scanf("%d%d", &m, &n);
	nhap_ma_tran(arr, m, n);
	dem = count_number_of_values(arr, m, n);
	printf("%d", dem);
	return 0;
}
