#include <stdio.h>
#define MAX 100

int maximun(float a[], int n)
{
	int i;
	float maximun;
	maximun = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>a[0])
			maximun = a[i];
	}
	return maximun;
}

int main(){
	int i, n;
	float  m;
	float a[MAX];
	scanf("%d", &n);
	
	//nhap mang
	for(i=0;i<n;i++)
		scanf("%f", &a[i]);
	m = maximun(a[i], n);
	//hien thi mang
	for(i=0;i<n;i++)
		printf("%.2f ", a[i]);
	return 0;
}
