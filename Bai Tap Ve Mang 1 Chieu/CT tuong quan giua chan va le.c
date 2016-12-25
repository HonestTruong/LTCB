#include <stdio.h>
#define MAX 100


/*
Chuong trinh cho biet su tuong quan giua so luong chan va le trong mang gom n phan tu kieu nguyen
Hien thi ra man hinh nhu sau:
	gia tri 1 neu chan nhieu hon le
	gia tri 0 neu chan bang voi le
	gia tri -1 neu le nhieu hon chan
	
*/
void nhap_mang(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
}

int main()
{
    int a[MAX], i, n, c=0;
    scanf("%d", &n);
    nhap_mang(a, n);
    for(i=0; i<n; i++)
        if(a[i]%2==0)
            c=c+1;
    if(c<=(n/2) && n%2!=0)
		printf("1");
	else if(c>(n/2))
		printf("-1");
	else printf("0");
	return 0;
}
