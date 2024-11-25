#include <stdio.h>

int main(){
	
	// khai bao chieu rong, chieu dai ,chu vi va dien tich hinh chu nhat
	int r,d,chuvi,dientich;
	
	// nhap gia tri cua chieu rong va chieu dai
	printf("Nhap chieu rong : ");
	scanf("%d" ,&r);
	printf("Nhap chieu dai : ");
	scanf("%d" ,&d);
	
	//tinh chu vi hinh chu nhat
	chuvi = 2 * (r + d);
	printf("Chu vi hinh chu nhat bang %dcm\n" ,chuvi);
	
	// tinh dien tich hinh chu nhat 
	dientich = r * d;
	printf("Dien tich hinh chu nhat bang %dcm^2\n" ,dientich);
	
	return 0;
}
