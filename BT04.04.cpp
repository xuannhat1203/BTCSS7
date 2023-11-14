#include<stdio.h>
int main(){
	int number;
	int sum = 0;
	printf("Nhap so muon kiem tra: ");
	scanf("%d", &number);
	for (int i = 1; i <= number; i++){
		if (number%i==0){
			sum = sum +i;
		}
	}
	if (sum = number){
		printf("day la so hoan hao");
	}else {
		printf("day khong phai la so hoan hao");
	}
}
