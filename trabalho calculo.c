#include <stdio.h>
#include <math.h>
#include <conio.h>

#define PI 3.141592653

#pragma warning(disable : 4996)

void main()
{
	int tampa;
	int terminar;

	float vol ,
		  base  ,
		  lateral ,
		  r1,r2,
		  h1,h2,
		  aux1,aux2, //variavel auxiliar
		  custototal2,custototal1,
		  areabase1,areabase2;
		  
		  
		printf("PROGRAMA DE OTIMIZACAO NA DETERMINACAO DAS DIMENSOES DA EMBALAGEM\n");
		printf("O calculo de teste (feito na imagem -teste- na pasta onde esta o executavel e o codigo) foi feito utilizando os valores:\n\nV= 375 cm cubicos \nPreco da base= 15 reais por cm quadrado\nPreco da lateral= 5 reais por cm quadrado\n\n##Inicio do Programa\n");

do{
		
		//Lendo volume cilindro
		do {
			printf("Digite o volume do cilindro: ");
			scanf("%f", &vol);
			if (vol <= 0)
				printf("\a\tValor invalido!\n");
		} while (vol < 0);

		//Lendo o preço da base
		do {
			printf("Digite o preco da base: ");
			scanf("%f", &base);
			if (base < 0)
				printf("\a\tValor invalido!\n");
		} while (base < 0);


		//Lendo o preco da lateral
		do {
			printf("Digite o preco da lateral: ");
			scanf("%f", &lateral);
			if (lateral < 0)
				printf("\a\tValor invalido!\n");
		} while (lateral < 0);


		//Se tem tampa ou não
		do {
			printf("\nO cilindro tem tampa? Digite 1 para SIM ou 2 para NAO: ");
			scanf("%d", &tampa);
			if (tampa < 1 || tampa > 2)
				printf("\a\tValor invalido!\n");
		} while (tampa < 1 || tampa > 2);

	// calculos
	
	// para obter o menor preço do cilindro é necessário minimizar a area total
	// custototal = base * PI * r^2 + lateral * 2 * PI * r * h
	// vol = PI * r^2 * h, assim h = vol/(r^2 * PI)
	// custototal = base * PI * r^2 + lateral * 2 * PI * r * (vol/(r* r * PI))
	// custototal = base * PI * r^2 + lateral * 2 * (vol/r)
	
	// custototal' = (2* base * PI * r^3 - lateral * vol * 2)/r^2
	
	// achando raio para menor custo
	// (2* base * PI * r^3 - lateral * vol * 2) = 0
	//aux = (lateral * vol * 2)/(2* base * PI);
	// r*r*r = aux
	//r = pow(aux, 1.0/3.0);  pow é função para potencia, no caso para resolver a raiz cubica
	// assim, sabemos o raio minimo
	
	switch ( tampa ){
		case 1:

		aux1 = (lateral * vol * 2)/(4* base * PI);
		r1 = pow(aux1, 1.0/3.0);
		
		custototal1 = 2*( base * PI * r1*r1 )+ (lateral * 2 * PI * r1 * h1);
		printf("\nCusto com tampa =  %.2f reais", custototal1);

		
			// menor tamanho da base
	areabase1 = PI * r1*r1;
	h1 = vol / areabase1;
	
		printf("\n## Area base =  %f cm quadrados\n", areabase1);
	printf("## h minimo =  %.2f cm\n", h1);
	printf("## Raio minimo =  %.2f cm\n", r1);
		break;
		
		case 2: 

	aux2 = (lateral * vol * 2)/(2* base * PI);
	r2 = pow(aux2, 1.0/3.0);
	
	custototal2 = (base * PI * r2*r2 )+ (lateral * 2 * PI * r2 * h2);
	printf("\nCusto sem tampa =  %.2f reais", custototal2);

	
		// menor tamanho da base
	areabase2 = PI * r2*r2;
	h2 = vol / areabase2;
	
		printf("\n## Area base =  %.2f\n", areabase2);
	printf("## h minimo =  %.2f\n", h2);
	printf("## Raio minimo =  %.2f\n", r2);
	break;
	
	default :
    printf ("Valor invalido!\n");
		
	}

		do {
			printf("\ndeseja reiniciar? digite 1 para sim ou 2 para nao:  ");
			scanf("%d", &terminar);
			if (terminar < 1 || terminar > 2)
				printf("\a\tValor invalido!\n");
		} while (terminar < 1 || terminar > 2);
}
while (terminar != 2);
printf("\nFeito por Arthur Quintanilha \a\a\a\n");
	system("pause");

}
