#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a, b, t, h, n;
	float c;
	printf("Nhap vao so thu nhat a: ");
	scanf("%d", &a);
	printf("Nhap vao so thu hai b: ");
	scanf("%d", &b);
	t = a+b;
	h = a-b;
	n = a*b;
	c = (float)a/b;
	printf("Tong cua hai so a va b la %d", t);
	printf("\nHieu hai so a va b la %d ", h);
	printf("\nTich hai so a va b la %d ", n);
	printf("Thuong hai so a va b la %2f ", c);
	return 0;
}
