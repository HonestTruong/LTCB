#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100

//chuong trinh tim doan [-x;x] ngan nhat sao cho no chua tat ca cac phan tu cua mang

void nhap_mang(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
}

int maximum(int a[], int n)
{
    int max, i;
    max = a[0];
    for(i=0; i<n; i++)
        if(max<a[i])
            max = a[i];
    return max;
}

int minimum(int a[], int n)
{
    int min, i;
    min = a[0];
    for(i=0; i<n; i++)
        if(min>a[i])
            min = a[i];
    return min;
}

int main()
{
    int a[MAX], n, max, min;
    scanf("%d", &n);
    nhap_mang(a, n);
    max = maximum(a, n);
    min = minimum(a, n);
    if(abs(min)>abs(max))
        printf("[%d;%d]", -abs(min), abs(min));
    else if(abs(max)>abs(min))
        printf("[%d;%d]", -abs(max), abs(max));
    return 0;
}
