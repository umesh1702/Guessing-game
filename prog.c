#include <stdio.h>

int main (void) {
	int flag = 0;
	int x,m,i;
	char your_order[20];
	char staters[8][20]={"drum sticks","kebab","pokra","bonda","samosacurrybuns","vada","cornfitters","pannertikka"};
	char main_course[7][20]={"chickenbiryani","mutton biryani","fishbiryani","dumbiryani","curdrice","fullmeals","frypiecebiryani"};
	char dessert[4][20]={"pudding","icecream","sweetpie","cakes"};
	printf("welcome\n");


	while (1) {
		printf("what do you wish to do (enter the number)\n 1.order \n 2.stop \n");
		scanf("%d", &flag);

		if (flag == 2) {
			break;
		}

 		printf("which do you choose (enter a number) /n 1.staters 2.main_course 3.dessert \n");
 		scanf("%d",&x);		


		if (x==1) {
	     		for(i=0;i<8;i++)
	      			printf("%s\n",staters[i]);
	      
			scanf("%s",&your_order);
	      		printf("your order is %s\n", your_order);    

	  	}
	  
	 	else if(x==2) {
	     		for(i=0;i<=7;i++)
	      			printf("%s\n",main_course[i]);
	      
			scanf("%s",&your_order);
	      		printf("your order is %s\n", your_order);     
	  	}
	 
		else if(x==3) {
	      		for(i=0;i<4;i++)
	      			printf("%s\n",dessert[i]);
	      		scanf("%s",&your_order);
	      		printf("your order is %s\n", your_order);
	      }
	}

	return 0;
}
