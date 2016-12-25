/* Khai bao mot cau truc Diem2D co 2 truong du lieu x va y (kieu float)
Trong ham main khai bao bien d kieu Diem2D
Nhap du lieu cho d
Xuat d ra man hinh
*/

#include <stdio.h>

typedef struct {
	float x, y;
}Diem2D;

void Nhap_diem1(Diem2D *d){
	scanf("%f%f", &(*d).x, &(*d).y); // Hoi rac roi, hiem duoc su dung
}

void Nhap_diem2(Diem2D *d){
	scanf("%f%f", &d->x, &d->y); // Thuong dung hon cach nhap 1
}

void Xuat_diem(Diem2D d){
	printf("(%.2f;%.2f)", d.x, d.y);
}

int main(){
	Diem2D d;
	
	//Nhap du lieu cho d
//	scanf("%f%f", &d.x, &d.y);
	
	Nhap_diem2(&d);
	
	//Xuat du lieu ra man hinh
//	printf("%.2f %.2f", d.x, d.y);
	
	Xuat_diem(d);
	return 0;
}

