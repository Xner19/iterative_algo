#include <stdio.h>
int main(){
	int city;
	float pop,mean=0,max,min,sum=0;
	printf("please enter the number of cities \n");
	scanf("%d", &city);
	for (int k=1;k<=city;k++){

		printf("please enter the population number of city %d \n",k);
		scanf("%f", &pop);
		if (k==1){
			min=max=pop;
		}
		if (pop<min){
			min=pop;
		}
		if (pop>max){
			max=pop;
		}
		

	sum+=pop;
	}
	mean=(float) sum/city;
	printf("the minimum is %f \n",min);
	printf("the maximum is %f \n",max);
	printf("the mean is %f \n", mean);

}
