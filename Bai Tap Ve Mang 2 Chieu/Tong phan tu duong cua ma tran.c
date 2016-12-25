#include <stdio.h>
#define MAX 100

//chuong trinh tinh tong cac so duong trong ma tran

void nhap_ma_tran(float arr[][MAX], int m, int n)
{
	int i, j;
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			scanf("%f", &arr[i][j]);
}

float tong_duong(float a[][MAX], int m, int n)
{
	int i, j;
	float t = 0;
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			if(a[i][j]>0)
				t = t+a[i][j];
	return t;
}

int main()
{
	float arr[MAX][MAX], t;
	int m, n;
	scanf("%d%d", &m, &n);
	nhap_ma_tran(arr, m, n);
	t = tong_duong(arr, m, n);
	printf("Sum of positive numbers: %.2f", t);
	return 0;
}

