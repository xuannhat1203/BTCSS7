#include<stdio.h>
int main(){
	int number,number1,number2;
	printf("nhap 1 so co 3 chu so: ");
	scanf("%d", &number);
	int a,b,c;
	a = number%10;
	number1 = number/10;
	b = number1%10;
	number2 = number1/10;
	c = number2%10;
	int armStrong; 
	armStrong = a*a*a + b*b*b + c*c*c;
	if (armStrong == number){
		printf("day la so armStrong");
	}else {
		printf("day khong phai la so armStrong");
	}
}
