#include <stdio.h>
int main(){
	float k, t;
		scanf("%f", &k);
	if(k<=1)
		t = k*15000;
	else if(k>1 && k<=5)
		t = 15000 + (k-1)*13500; 
	else if(k>5 && k<=120)
		t = 15000+4*13500+(k-5)*11000; 
	else if(k>120)
		t = (15000+4*13500+(k-5)*11000)-(15000+4*13500+(k-5)*11000)*0.1;
	printf("%.0f", t);
	return 0;
}
