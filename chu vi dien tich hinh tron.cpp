#include <stdio.h>
#define pi 3.14
int main(){
    float r;
    printf("Nhap vao ban kinh cua hinh tron: ");
    scanf("%f", &r);
    printf("Chu vi cua hinh tron la: ");
    printf("%.2f ", 2*pi*r);
    printf("\nDien tich cua hinh tron la: ");
    printf("%.2f", pi*r*r);
    return 0;
}
