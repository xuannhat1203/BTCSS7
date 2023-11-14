#include<stdio.h>
int main(){
	int number;
	printf("nhap 1 so co 3 chu so: ");
	scanf("%d", &number);
	int number1=number%10;
	number = number/10;
	int number2=number%10;
	number = number/10;
	int number3=number%10;
	printf("%d%d%d",number1,number2,number3);
}
