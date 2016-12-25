#include <stdio.h>
#include <math.h>
#define MAX 100


//Chuong trinh sao chep so nguyen to tu mang A sang mang B, in hai mang ra man hinh


void nhap_mang(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
}

void xuat_mang(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
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

int sao_chep(int a[], int n, int b[])
{
    int i, t=0;
    for(i=0; i<n; i++)
        if(so_ngto(a[i])==1)
            b[t++] = a[i];
    return t;
}

int main()
{
    int a[MAX], b[MAX], i, n;
    scanf("%d", &n);
    nhap_mang(a, n);
    i = sao_chep(a, n, b);
    printf("A: ");
    xuat_mang(a, n);
    printf("\nB: ");
    xuat_mang(b, i);
    return 0;
}
