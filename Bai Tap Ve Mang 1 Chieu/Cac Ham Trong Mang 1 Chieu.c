#include <stdio.h>
#include <limits.h>
#define MAX 100

//Ham nhap mang
void nhap_mang(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
}

//Ham xuat mang
void xuat_mang(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
}

//Ham liet ke so chan trong mang
void liet_ke_so_chan(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
            printf("%d ", a[i]);
    }
}

//ham liet ke so am trong mang
void liet_ke_so_am(float a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(a[i]<0)
            printf("%.2f ", a[i]);
    }
}

//Ham maximum tra ve gia tri phan tu lon nhat trong mang
int maximum(int a[], int n)
{
    int max, i;
    max = a[0];
    for(i=0; i<n; i++)
        if(max<a[i])
            max = a[i];
    return max;
}

//Ham tra ve vi tri cua phan tu nho nhat trong mang
 int find_min_index(int a[], int n)
 {
     int i, min, vt;
     min = a[0];
     for(i=0; i<n; i++)
        if(min>a[i])
        {
            min = a[i];
            vt = i;
        }
    return vt;
 }
 
 //Ham sap xep mang tang dan
 void sort(int a[], int n)
{
    int i, j, tam;
    for(i=0; i<n; i++)
        for(j=i+1; j<n; j++)
            if(a[i]>a[j])
            {
                tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
}

//Ham kiem tra mot so co phai la so ngto hay khong
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

//Ham dem so ngto co trong mang
int count_prime(int a[], int n)
{
    int i, dem=0;
    for(i=0;i<n;i++)
        if(so_ngto(a[i])==1 && a[i]<100)
            dem++;
    return dem;
}

//Ham tra ve vi tri cuoi cung cua phan tu bang x, neu khong co phan tu bang x thi tra ve -1
int the_last_position_of_x(int x, int a[], int n)
{
    int i, dem=-1;
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(i=0; i<n; i++)
        if(a[i]==x)
            dem = i;
    return dem;
}

//Ham tra ve vi tri cua so ngto dau tien trong mang, neu khong co thi tra ve -1
int the_first_prime_index(int a[], int n)
{
    int vt=-1, i;
    for(i=0; i<n; i++)
        if(so_ngto(a[i])==1)
        {
            vt = i;
            break;
        }
    return vt;
}


