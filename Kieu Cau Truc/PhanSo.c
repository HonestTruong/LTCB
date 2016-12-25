
/*viet chuong trinh nhap vao 2 phan so a,b (phai dung dang phan so).
Tinh a+b, a-b, a*b, a/b, tat ca phai toi gian
*/

#include <stdio.h>

typedef struct{
	int tu, mau;
}PhanSo;

int UCLN(int a, int b){
	while(a!=b){
		if(a>b)
			a = a - b;
		else 
			b = b - a;
	}
	return a;
}

void nhap_ps(PhanSo *n){
	scanf("%d %d", &n->tu, &n->mau);
}

PhanSo rutgon(PhanSo *n){
	PhanSo x;
	int i;
	i=UCLN(n->tu, n->mau);
	if(i>1){
		x.tu=n->tu/i;
		x.mau=n->mau/i;
	}
	return x;
}

PhanSo cong_ps(PhanSo a, PhanSo b){
	PhanSo x;
	x.tu=(a.tu*b.mau)+(a.mau*b.tu);
	x.mau=(a.mau*b.mau);
	return rutgon(&x);
}

PhanSo tru_ps(PhanSo a, PhanSo b){
	PhanSo x;
	x.tu=(a.tu*b.mau)-(a.mau*b.tu);
	x.mau=(a.mau*b.mau);
	return rutgon(&x);
}

PhanSo nhan_ps(PhanSo a, PhanSo b){
	PhanSo x;
	x.tu=a.tu*b.tu;
	x.mau=a.mau*b.mau;
	return rutgon(&x);
}

PhanSo chia_ps(PhanSo a, PhanSo b){
	PhanSo x;
	x.tu=a.tu*b.mau;
	x.mau=a.mau*b.tu;
	return rutgon(&x);
}

void xuat_ps(PhanSo n){
	if(n.tu==0)
		printf("%d", n.tu);
	else if(n.mau==1)
		printf("%d", n.tu);
	else if(n.mau<0)
		printf("%d/%d", -n.tu, -n.mau);
	else printf("%d/%d", n.tu, n.mau);
}

int main(){
	PhanSo a, b;
	nhap_ps(&a);
	xuat_ps(a);
	return 0;
}
