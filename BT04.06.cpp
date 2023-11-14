#include<stdio.h>
int main(){
	int number;
	printf("nhap 1 so ban muon: ");
	scanf("%d", &number);
	int giaiThua=1;
	for(int i = 1 ; i<=number; i++){
		giaiThua = giaiThua *i;
	}
	printf("%d",giaiThua);
}
