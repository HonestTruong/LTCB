#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	if(n==0)
		printf("Khong");
	else {
		if(n==1)
			printf("Mot");
		else {
			if(n==2)
				printf("Hai");
			else {
				if(n==3)
					printf("Ba");
				else {
					if(n==4)
						printf("Bon");
					else {
						if(n==5)
							printf("Nam");
						else {
							if(n==6)
								printf("Sau");
							else {
								if(n==7)
									printf("Bay");
								else {
									if(n==8)
										printf("Tam");
									else {
										if(n==9)
											printf("Chin");
										else
											printf("Khong doc duoc.");
									}
								}
							}
						}
					}
				}
			}

		}
	}	
	return 0;
	}
