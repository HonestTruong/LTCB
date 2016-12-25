#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100


/*Chuong trinh tim gia tri xa x(nhap tu ban phim) nhat trong mang 1 chieu gom cac so nguyen, in gia tri do ra 
man hinh*/
void nhap_mang(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
}

int khoang_cach(int a[], int n, int x)
{
    int i, j, kc;
    kc = abs(x-a[0]);
    for(i=0; i<n; i++)
        if(abs(a[i]-x)>kc)
        {
            j = a[i];
            kc = abs(x-a[i]);
        }
    return j;
}

int main()
{
    int a[MAX],xa , n, x;
    scanf("%d", &n);
    nhap_mang(a, n);
    scanf("%d", &x);
    xa = khoang_cach(a, n, x);
    printf("%d", xa);
    return 0;
}
