#include<stdio.h>

int main(){
	// khai bao bien 
	int a,b,sum,hieu,tich;
	float thuong;
	// nhap so thu nhat
	printf("Moi nhap so thu nhat : ");
	scanf("%d" ,&a);
	// nhap so thu hai 
	printf("Moi nhap so thu hai : ");
	scanf("%d" ,&b);
	// tinh tong
	sum = a + b;
	printf("Ket qua cua phep cong %d\n" ,sum);
	// tinh hieu
	hieu = a - b;
	printf("Ket qua cua phep tru %d\n" ,hieu);
	// tinh tich
	tich = a * b;
	printf("Ket qua cua phep nhan %d\n" ,tich);
	//tinh thuong
	thuong = a / b;
	printf("Ket qua cua phep chia %.lf\n" ,thuong);
	
	return 0;
}
