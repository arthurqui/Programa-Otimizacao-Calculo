#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	float p,a,imc;


	printf("dig p \n");
	scanf("%f", &p);
	
	printf("dig a \n");
	scanf("%f", &a);
	
	imc = p / (a*a);
    
	if (imc >=18<25) 
	{
		printf("peso nor \n %f", imc);

	}

	if (imc >26<30) 
	{
		printf("peso acima do peso \n");

	}

	if (imc >= 30<35)
	{
		printf("ob1 \n");

	}
	else {
		print("ob2");
	}

	
	getchar();
}
