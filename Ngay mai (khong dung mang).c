#include <stdio.h>

int main(){
    int ngay, thang, nam, n;
    scanf("%d%d%d", &ngay, &thang, &nam);
    switch(thang)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if((ngay>=1)&&(ngay<31))
                ngay++;
            else if((ngay==31)&&(thang==12))
            {
            	ngay = 1;
                thang = 1;
                nam++;
			}
            else if(ngay==31)
            {
            	ngay = 1;
                thang++;
			}
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if((ngay>=1)&&(ngay<30))
                ngay++;
            else if(ngay==30)
            {
            	ngay = 1;
                thang++;
			}
            break;
        case 2:
            if((nam%400==0)||(nam%4==0 && nam%100!=0))
                n = 29;
            else n = 28;
            if((ngay>=1)&&(ngay<n))
                ngay++;
            else if(ngay==n)
            {
            	ngay = 1;
                thang++;
			}
            break;
    }
    printf("%d/%d/%d", ngay, thang, nam);
    return 0;
}}
