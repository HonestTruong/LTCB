#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c;
	printf("Nhap vao he so a: ");
	scanf("%d", &a);
	printf("Nhap vao he so b: ");
	scanf("%d", &b);
	printf("Nhap vao he so c: ");
	scanf("%d", &c);

	if(a == 0){
		if(b == 0){
			if(c == 0)
				printf("Phuong trinh co vo so nghiem.");
			else 
				printf("Phuong trinh vo nghiem.");
		}
		else 
			printf("Phuong trinh co nghiem la: %2f", (float)-c/b);	
	}	
	else {
		float D;
		D = b*b -4*a*c;
		if(D == 0)
			printf("Phuong trinh co nghiem duy nhat %2f", (float)-b/(2*a));
		else{
			if(D>0){
				float x1, x2;
				x1 = (((float)-b + sqrt(D)) / (2*a));
				x2 = (((float)-b - sqrt(D)) / (2*a));					
				printf("Phuong trinh co hai nghiem phan biet:");
				printf("\nx1 = %2f", x1);		
				printf("\nx2 = %2f", x2);
			}	
			else 
				printf("Phuong trinh vo nghiem.");
		}
	}	
	return 0;
}
