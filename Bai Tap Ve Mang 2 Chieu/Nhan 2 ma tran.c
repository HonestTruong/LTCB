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

int nhan_ma_tran(int arr1[][MAX], int m1, int n1, int arr2[][MAX], int m2, int n2, int arr3[][MAX])
{
	int i, j, k;
	if(n1!=m2)
		return 0;
	else
	{
		for(i=0; i<m1; i++)
		{
			for(j=0; j<n2; j++)
			{
				arr3[i][j] = 0;
				for(k=0; k<n1; k++)
				{
					arr3[i][j] += arr1[i][k]*arr2[k][j];
				}
			}
		}
		return 1;
	}
}
				
int main(){
	int arr1[MAX][MAX], arr2[MAX][MAX], arr3[MAX][MAX], m1, n1, m2, n2, t;
	scanf("%d%d", &m1, &n1);
	nhap_ma_tran(arr1, m1, n1);
	scanf("%d%d", &m2, &n2);
	nhap_ma_tran(arr2, m2, n2);
	t = nhan_ma_tran(arr1, m1, n1, arr2, m2, n2, arr3);
	printf("%d\n", t);
	xuat_ma_tran(arr3, m1, n2);
	return 0;
}
