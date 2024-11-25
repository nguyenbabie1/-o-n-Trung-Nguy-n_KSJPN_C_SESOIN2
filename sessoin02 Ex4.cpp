#include <stdio.h>

int main(){
	int a,chuvi,dientich;

	// nhap canh hinh vuong
	printf("Nhap canh cua hinh vuong : ");
	scanf("%d" ,&a);

	// tinh chu vi hinh vuong
	chuvi = 4 * a;
	printf("Chu vi cua hinh vuong bang %dcm\n" ,chuvi);
	
	// tinh dien tich hinh vuong
	dientich = a * a;
	printf("Dien tich hinh vuong bang %dcm^2\n" ,dientich);
	
	return 0;
}
