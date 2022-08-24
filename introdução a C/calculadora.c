#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void )
{
	float n1,n2,r;
    int op;
	printf("digite um numero  \n");
		scanf("%f", &n2);
	printf("digite um numero  \n");
		scanf("%f", &n1);
	
	printf("escolha uma opção  \n");
	printf("1 +  \n");
	printf("2 -  \n");
	printf("3 *  \n");
	printf("4 /  \n");
	scanf("%d", &op);
	 switch(op) {
	  case 1:
	  	r=n1+n1;
	  		printf("resultado %f", r);
		break;
	  
	  case 2:
	  		r=n1-n1;
	  		printf("resultado %f", r);
	  	
		break;
	  
	  case 3:
	  	r=n1*n1;
	  	printf("resultado %f", r);
		break;
	  
	  case 4:
	   
	  		r=n1/n1;
	  		printf("resultado %f", r);
		break;
	  
	}
	return 0;
}
