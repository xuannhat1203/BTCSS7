#include<stdio.h>
int main(){
	int number;
	int sum = 0;
	printf("nhap 1 so ban muon: ");
	scanf("%d", &number);
	for (int i = 1; i <= number; i++){
		if (number%i==0){
			sum = sum + i;
		}	
	}
	printf("%d", sum);
}
