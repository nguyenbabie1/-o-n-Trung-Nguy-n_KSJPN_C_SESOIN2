#include <stdio.h>

int main(){
	
	//khai bao ban kinh, chu vi, dien tich va pi
	int r;
	float chuvi,dientich;
	float pi = 3.14;
	
	//Nhap ban kinh
	printf("Nhap ban kinh : ");
	scanf("%d" ,&r);
	
	//tinh chu vi hinh tron
	chuvi = 2 * pi * r;
	printf("Chu vi hinh tron bang %.2fcm\n" ,chuvi);
	
	//tinh dien tich hinh tron
	dientich = pi * r * r;
	printf("Dien tich hinh tron %.2fcm^2\n" ,dientich);
	
	return 0;
	
}
