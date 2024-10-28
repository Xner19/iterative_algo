#include <stdio.h>
int main() {
	int N,sum,count,dec;
	float inc,Ninc;
	printf("please enter the number of N \n");
	scanf("%d",&N);
	printf("please enter your incremant \n");
	scanf("%f",&inc);
	for (int i=0;i<=N;i++){
		dec=N-i;
		printf("the number is %d \n",dec);
	}

	for (int j=1;j<=N;j++){
		sum=j;
		printf("the numbers are %d \n",sum);
	}
	if (inc>1){

		printf("please enter the number of N \n");
		return 1;	
	}
	int k=1;
	while (Ninc<=N){
		Ninc=(float) k*(inc);
		printf("the incremantation numbers are = %f \n",Ninc);
		k++;
		if (((float) Ninc+inc)>N){
			break;
		}
	}
	return 0;
}
