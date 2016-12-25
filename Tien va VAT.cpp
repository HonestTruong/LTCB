//#include <stdio.h>
//
//int main(){
//	int sl, dg;
//	printf("So luong: ");
//	scanf("%d", &sl);
//	printf("Don gia: ");
//	scanf("%d", &dg);
//	printf("Tong Tien = ");
//	printf("%d", sl*dg);
//	printf("\nThue VAT = ");
//	printf("%d", (10*sl*dg)/100);
//	return 0;
//}
#include <stdio.h>

int main(){
	int sl, dg;
	scanf("%d%d", &sl, &dg);
	printf("%d", sl*dg);
	printf("\n%d", (10*sl*dg)/100);
	return 0;
}
