#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c;
	printf("Nhap vao 3 canh cua tam giac:\n");
	scanf("%f%f%f", &a, &b, &c);
	if((a+b<=c) || (a+c<=b) || (b+c<=a))
		printf("Khong tao thanh tam giac");
	else{
		float p;
		p = (a+b+c)/2;
		printf("%.2f ", a+b+c);
		printf("%.2f", sqrt(p*(p-a)*(p-b)*(p-c)));
	}
	return 0;
}
