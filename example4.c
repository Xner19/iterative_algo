#include <stdio.h>
int main() {
	int x,y;
	char dir;
	int gridsize=4;
	printf("enter the initial pos of the player (x) \n");
	scanf ("%d", &y);
	printf("enter the initial pos of the player (y) \n");
	scanf ("%d", &x);
	if (x<0 || y<0 || x>=gridsize || y>=gridsize){
		printf("invalid");
		return 1;	
	}
	while (1){
		printf("please enter the direction you want to go to \n");
		scanf(" %c", &dir);
		if (dir=='U'){
			y=y+1;
		}
		else if(dir=='D'){
			y=y-1;
		}
		else if (dir=='R'){
			x=x+1;
		}
		else if (dir=='L'){
			x=x-1;
		}


		if (x<=0){
			printf("you reached maximum (0,%d) \n",y);
			break;
		}
		else if (x>=4){
			printf("you reached (3,%d) \n",y);
			break;
		}
		else if (y<=0){
			printf("you reached (%d,0) \n)",x);
			break;
		}
		else if (y>=4){
			printf("you reached (%d,3) \n",x);
			break;
		}
	}
	return 0;


}
