#include <stdio.h>
//#include <math.h>
int main(){
	float T, L, H;
	int t, l, h;
	printf("Diem toan = ");
	scanf("%f", &T);
	printf("Diem ly = ");
	scanf("%f", &L);
	printf("Diem hoa = ");
	scanf("%f", &H);
	printf("He so mon toan: ");
	scanf("%d", &t);
	printf("He so mon ly: ");
	scanf("%d", &l);
	printf("He so mon hoa: ");
	scanf("%d", &h);
	printf("Diem trung binh = %.2f", ((T*t)+(L*l)+(H*h))/(t+l+h));
	return 0;
}
