#include <stdio.h>
int main() {
	int N,a=0,e=0,i=0,o=0,u=0,other=0;
	char letter;
	printf("please enter the number of characters \n");
	scanf("%d", &N);
	printf("please enter the letters you want to check \n");
	for (int j=1;j<=N;j++){
		scanf(" %c", &letter);
		if (letter=='a'){
			a++;
			printf("frequancy of a %d \n",a);
			continue; 
		}
		if (letter=='i'){
			i++;
			printf("frequancy of i %d \n",i);
			continue; 

		}
		if (letter=='e'){
			e++;
			printf("frequancy of e %d \n",e);
			continue; 
		}
			
		if (letter=='o'){
			o++;
			printf("frequancy of o %d \n",o);
			continue; 
		}
		
		if (letter=='u'){
			u++;
			printf("frequancy of i %d \n",u);
			continue; 
		}
		else{
			other=other+1;
			printf("frequancy of others  %d \n",other);
			continue; 
		}
	}
	return 0;
}
