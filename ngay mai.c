#include <stdio.h>
int main(){
	int d, m, y;
	int ngay[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	printf("Nhap vao ngay thang nam:\n");
	scanf("%d%d%d", &d, &m, &y);
	if(y % 400 == 0 ||(y % 4 == 0 && y % 100 != 0))
    	ngay[2] = 29;
    if(d>=1 && d<ngay[m])
    	d = d+1;
	else{
		if(d==ngay[m] && m==12){
			d = 1;
			m = 1;
			y = y+1;
		}
		else{
			if(d==ngay[m]){
				d = 1;
				m = m+1;
			}
		}
	}
	printf("%d/%d/%d", d, m, y);
	return 0;
}
