#include <stdio.h>

//int main()
//{
//	char varible;
//	varible = 17;
//	&varible;
//	printf("%d", &varible);
//	return 0;
//}

//int main()
//{
//	int var;
//	var = 17;
//	int *p_var;
//	p_var=&var;
//	printf("Dia chi cua bien var: %d\n", p_var);
//	printf("Dia chi cua bien var: %d\n", &var);
//	printf("Dia chi cua bien p_var: %d", &p_var);
//	return 0;
//	
//}

int main()
{
	short a=10;
	short *p;
	p=&a;
	
	printf("Dia chi cua bien a: %d\n", &a);
	printf("Gia tri cua bien a: %d\n", a);
	printf("Kich thuoc cua bien a: %d\n", sizeof(a));
	
	printf("Dia chi cua con tro p: %d\n", &p);
	printf("Gia tri cua con tro p: %d\n", p);
	
	printf("Gia tri vung nho ma p dang tro toi: %d\n", *p);
	
	printf("Kich thuoc cua con tro p: %d\n", sizeof(p));
	
	printf("Kich thuoc cua du lieu ma p dang tro toi: %d\n", sizeof(*p));
	
	*p=10;
	
		printf("Dia chi cua bien a: %d\n", &a);
	printf("Gia tri cua bien a: %d\n", a);
	printf("Kich thuoc cua bien a: %d\n", sizeof(a));
	
	printf("Dia chi cua con tro p: %d\n", &p);
	printf("Gia tri cua con tro p: %d\n", p);
	
	printf("Gia tri vung nho ma p dang tro toi: %d\n", *p);
	
	printf("Kich thuoc cua con tro p: %d\n", sizeof(p));
	
	printf("Kich thuoc cua du lieu ma p dang tro toi: %d\n", sizeof(*p));
	return 0;
}
