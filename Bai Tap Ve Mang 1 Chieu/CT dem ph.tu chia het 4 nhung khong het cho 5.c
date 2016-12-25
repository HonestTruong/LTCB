#include <stdio.h>
#define MAX 100

void nhap_mang(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
}

int main()
{
    int a[MAX], i, n, dem=0;
    scanf("%d", &n);
    nhap_mang(a, n);
    for(i=0; i<n; i++)
        if(a[i]%4==0 && a[i]%5!=0)
            dem++;
    printf("%d", dem);
    return 0;
}
