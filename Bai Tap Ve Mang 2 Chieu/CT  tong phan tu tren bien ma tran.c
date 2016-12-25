#include <stdio.h>
#define MAX 100

void nhap_ma_tran(int arr[][MAX], int m, int n)
{
	int i, j;
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			scanf("%d", &arr[i][j]);
}

int main()
{
	int arr[MAX][MAX], m, n, i, t=0;
	scanf("%d%d", &m, &n);
	nhap_ma_tran(arr, m, n);
	
	//tinh tong tren hang thu m=0
	for(i=0; i<n; i++)
		t = t + arr[0][i];
	
	//tinh tong tren hang thu m-1
	for(i=0; i<n; i++)
		t = t + arr[m-1][i];
		
	//tinh tong tren cot thu n=0
	for(i=0; i<m; i++)
		t = t + arr[i][0];
		
	//tinh tong tren cot thu n-1
	for(i=0; i<n; i++)
		t = t + arr[i][n-1];
	
	//tong cac phan tu tren bien cua ma tran la
	t = t - arr[0][0] - arr[0][n-1] - arr[m-1][0] - arr[m-1][n-1];
	printf("Sum of bordered values: %d", t);
	return 0;
}
