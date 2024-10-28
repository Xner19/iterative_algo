#include <stdio.h>
int main(){
	int N;
	printf("enter the number you want to check \n");
	scanf("%d",&N);
	if (N%2!=0){
		printf("the number is a prime number \n");
	}
	else {
		printf("the number is not a prime number \n");
	}
}
