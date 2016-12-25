/*Viet chuong trinh nhap vao danh sach n sinh vien, MSSV, Ho ten, DienTB.
In thong tin ra man hinh. Tim sinh vien theo ten co trong danh sach.
*/

#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct{
	char MSSV[10], Hoten[30];
	float DiemTB;
}SinhVien;

void nhap_chuoi(char s[MAX]){
	fgets(s, sizeof(s), stdin);
	s[strlen(s)-1]='\0';
}

void Nhap_sv(SinhVien s[MAX], int n){
	int i;
	for(i=0; i<n; i++){
		nhap_chuoi(s[i].MSSV);//nhap MSSV
		
		nhap_chuoi(s[i].Hoten);//nhap Hoten
		
		scanf("%f", &s[i].DiemTB);
	}
}

void Xuat_sv(SinhVien s[MAX], int n){
	int i;
	printf("%-15s %-10s %-7s\n", "Ho Ten", "MSSV", "Diem TB");
	for(i=0; i<n; i++){
		printf("%-15s %-10s %-7.2f\n", s[i].Hoten, s[i].MSSV, s[i].DiemTB);
	}
}

int main(){
	int n;
	SinhVien sv[MAX];
	printf("Nhap so sinh vien:");
	scanf("%d", &n);
	Nhap_sv(sv, n);
	Xuat_sv(sv, n);
	return 0;
}
