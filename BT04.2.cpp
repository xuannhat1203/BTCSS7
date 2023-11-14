#include<stdio.h>
int main(){
	int number;
	printf("nhap 1 so tuy y: ");
	scanf("%d", &number);
	for ( int i = 0; i <= number; i++){
		if (i % 3 == 0){
			printf("%d",i);
		}
	}
}
