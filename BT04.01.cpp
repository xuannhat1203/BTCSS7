#include<stdio.h>
int main(){
	int number;
	int sum=0;
	printf("nhap 1 so nguyen: ");
	scanf("%d",&number);
	for (int i = 0; i <= number; i++ ){
		sum = sum + i;
		
	}
	printf("%d",sum);
}
