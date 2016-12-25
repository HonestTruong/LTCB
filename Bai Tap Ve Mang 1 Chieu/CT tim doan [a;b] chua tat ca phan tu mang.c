#include <stdio.h>
#include <limits.h>
#define MAX 100

//chuong trinh tim doan [a;b] ngan nhat chua duoc tat ca phan tu trong mang


int main(){
	int a[MAX], n, i, max, min;
	scanf("%d", &n);
	max=INT_MIN;
	min=INT_MAX;
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
		if(max<a[i])
			max=a[i];
		else if(min>a[i])
			min=a[i];
	}
	printf("[%d;%d]", min, max);
	return 0;	
}
