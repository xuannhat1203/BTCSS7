#include<stdio.h>
int main(){
	int number;
	printf("nhap vao 1 so tu nhien: ");
	scanf("%d", &number);
	if (number < 1){
		printf("day khong phai so nguyen to");
	}
	for (int i=2; i < number;i++){
		if (number%i==0){
			printf("day khong phai so nguyen to");
		}
	}
	printf("day la so nguyen to");
}
