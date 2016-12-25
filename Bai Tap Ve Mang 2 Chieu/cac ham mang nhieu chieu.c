#include <stdio.h>
#include <limits.h>
#include <math.h>
#define MAX 100

//ham nhap ma tran
void nhap_ma_tran(int arr[][MAX], int m, int n)
{
	int i, j;
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			scanf("%d", &arr[i][j]);
}

//ham in ma tran
void xuat_ma_tran(int arr[][MAX], int m, int n)
{
	int i, j;
	for(i=0; i<m; i++)
	{	for(j=0; j<n; j++)
			printf("%3d ", arr[i][j]);
		printf("\n");
	}	
}

//ham tim phan tu lon nhat trong ma tran
float maximum(float arr[][MAX], int m, int n)
{
	int i, j;
	float max;
	max = arr[0][0];
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			if(arr[i][j]>max)
				max = arr[i][j];
	}
	return max;
}

//ham kiem tra xem ma tran co ton tai so chan nho hon 2015 hay khong
int exist_even_lt_2015(int arr[][MAX], int m, int n)
{
	int i, j, k=0;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			if((arr[i][j]%2==0) && (arr[i][j]<2015))
			{
				k=1;
				break;
			}
	}
	return k;
}


int so_ngto(int n)
{
	int i;
	if(n<2)
		return 0;
	else{
		for(i=2; i<=(int)sqrt(n); i++)
			if(n%i==0)
				return 0;
	}
	return 1;
}
//ham dem so nguyen to trong ma tran
int count_prime(int arr[][MAX], int m, int n)
{
	int i, j, dem=0;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			if(so_ngto(arr[i][j])==1)
				dem++;
	}
	return dem;
}

//ham tim xem gia tri x co ton tai trong ma tran hay khong
int find_x(int arr[][MAX], int m, int n, int x)
{
	int i, j, k=0;
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			if(arr[i][j]==x)
			{
				k=1;
				break;
			}
	return k;
}

//ham kiem tra xem 1 hang cua ma tran co tang dan hay khong.
int hang_tang_dan(int arr[][MAX], int m, int n, int row)
{
	int i;
	if(row<0 && row>=m)
		return -1;
	else 
	{
		for(i=1; i<n; i++)
			if(arr[row][i]<arr[row][i-1])
				return 0;
	}
	return 1;
}


//ham cong hai ma tran
int cong_ma_tran(int arr1[][MAX], int m1, int n1, int arr2[][MAX], int m2, int n2, int arr3[][MAX])
{
	int i, j;
	if(m1==m2 && n1==n2)
		for(i=0; i<m1; i++)
		{	for(j=0; j<n1; j++)
				arr3[i][j] = arr1[i][j]+arr2[i][j];
		}
		return 1;
	return 0;
}
//int main()
//{
//	int arr1[MAX][MAX], arr2[MAX][MAX], arr3[MAX][MAX], max, m1, m2, n1, n2;
//	scanf("%d%d%", &m1, &n1);
//	nhap_ma_tran(arr1, m1, n1);
//	scanf("%d%d%", &m2, &n2);
//	nhap_ma_tran(arr2, m2, n2);
//	max = cong_ma_tran(arr1, m1, n1, arr2, m2, n2, arr3);
//	if(max==0)
//		printf("Khong cong duoc");
//	if(max==1)
//		xuat_ma_tran(arr3, m1, n1);
////	printf("%d", max);
//	return 0;
//}


//ham sap xem ma tran tang dan tu tren xuong và tu trai sang phai
void sort(int arr[][MAX], int m, int n)
{
	int i, j, tam, size=0, index=0, a[MAX*MAX];
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			a[size++] = arr[i][j];
	
	for(i=0; i<size; i++)
		for(j=i+1; j<size; j++)
			if(a[i]>a[j])
			{
				tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
	
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			arr[i][j] = a[index++];
}
//int main()
//{
//	int arr[MAX][MAX], m, n;
//	scanf("%d%d", &m, &n);
//	nhap_ma_tran(arr, m, n);
//	sort(arr, m, n);
//	xuat_ma_tran(arr, m, n);
//	return 0;
//}


//tinh tong cac so chan tren cac cot ma tran
int sum_even_numbers(int arr[][MAX], int m, int n, int column)
{
	int i, t=0;
	for(i=0; i<m; i++)
		if(arr[i][column]%2==0)
			t = t+arr[i][column];
	return t;
}
//int main()
//{
//	int arr[MAX][MAX], t, m ,n, c;
//	scanf("%d%d", &m, &n);
//	nhap_ma_tran(arr, m, n);
//	scanf("%d", &c);
//	t = sum_even_numbers(arr, m, n, c);
//	printf("%d", t);
//	return 0;
//}


//
int tong_duong_cheo_chinh(int arr[][MAX], int m, int n)
{
	int i, j, t=0;
	if(m!=n)
		return INT_MIN;
	else
	{
		for(i=0; i<m; i++)
			for(j=0; j<n; j++)
				if(i==j)
					t = t + arr[i][j];
		return t;
	}
}
//int main()
//{
//	int arr[MAX][MAX], m, n, t;
//	scanf("%d%d", &m, &n);
//	nhap_ma_tran(arr, m, n);
//	t = tong_duong_cheo_chinh(arr, m, n);
//	printf("%d", t);
//	return 0;
//}



int tong_duong_cheo_phu(int arr[][MAX], int m, int n)
{
	int i, j, t=0;
	if(m!=n)
		return INT_MIN;
	else
	{
		for(i=0; i<m; i++)
			for(j=0; j<n; j++)
				if((i+j)==(n-1))
					t = t + arr[i][j];
		return t;
	}
}
//int main()
//{
//	int arr[MAX][MAX], m, n, t;
//	scanf("%d%d", &m, &n);
//	nhap_ma_tran(arr, m, n);
//	t = tong_duong_cheo_phu(arr, m, n);
//	printf("%d", t);
//	return 0;
//}


//ham tinh tong cac phan tu nam tren duong cheo chinh cua ma tran
int tong_nua_tren_duong_cheo_chinh(int arr[][MAX], int m, int n)
{
	int i, j, t=0;
	if(m!=n)
		return INT_MIN;
	else
	{
		for(i=0; i<m; i++)
			for(j=0; j<n; j++)
				if(i<j)
					t = t+arr[i][j];
		return t;
	}
}
//int main()
//{
//	int arr[MAX][MAX], m, n, t;
//	scanf("%d%d", &m, &n);
//	nhap_ma_tran(arr, m, n);
//	t = tong_nua_tren_duong_cheo_chinh(arr, m, n);
//	printf("%d", t);
//	return 0;
//}


//ham kiem tra va liet ke dong nao la toan nhung so chan.
void liet_ke_dong_chan(int arr[][MAX], int m, int n)
{
	int a[MAX], size=0, i, j, c;
	for(i=0; i<m; i++)
	{
		c=1;
		for(j=0; j<n; j++)
		{
			if(arr[i][j]%2!=0)
			{
				c=0;
				break;
			}
		}
		if(c==1)
			a[size++] = i;
	}
	if(size==0)
		printf("Khong co dong nao!");
	else
	{
		printf("Cac dong: ");
		for(i=0; i<size; i++)
			printf("%d ", a[i]);
	}	
}
int main(){
	int arr[MAX][MAX], m, n;
	scanf("%d%d", &m, &n);
	nhap_ma_tran(arr, m, n);
	liet_ke_dong_chan(arr, m, n);
	return 0;
}



