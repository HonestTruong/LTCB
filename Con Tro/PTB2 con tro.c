#include <stdio.h>
#include <math.h>


int main(){
	float a, b, c, x1, x2;
	int t;
	scanf("%f%f%f", &a, &b, &c);
	t=PTB2(a, b, c, &x1, &x2);
	if(t==-1)
		printf("Phuong trinh vo nghiem");
	else if(t==0)
		printf("%.2f", x1);
	else if(t==1)
		printf("%.2f %.2f",x1, x2);
	else if(t==2)
		printf("Phuong trinh vo so nghiem.");
}

int PTB2(float a, float b, float c, float *px1, float *px2)
{
	if(a == 0){
		if(b == 0){
			if(c == 0)
				return 2;//phuong trinh co vo so nghiem.
			else 
				return -1;
		}
		else
		{
			*px1=-c/b;
			return 0;
		}		
	}	
	else {
		float D;
		D = b*b -4*a*c;
		if(D == 0)
		{
			*px1=-b/(2*a);
			return 0;
		}	
		else{
			if(D>0)
			{
				*px1=(-b + sqrt(D)) / (2*a);
				*px2=(-b - sqrt(D)) / (2*a);
				return 1;
			}	
			else
				return -1;
		}
	}
}
