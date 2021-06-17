#include <stdio.h>
#include <math.h>

#pragma warning(disable : 4996)

int main()
{
	float altura;
	float peso;
	float imc;


			printf("Digite a altura (em metros): ");
			scanf("%f", &altura);

			printf("Digite o peso(em kg): ");
			scanf("%f", &peso);


	/*IMC em adultos
	
Condição

Abaixo de 18,5 :Abaixo do peso

Entre 18,5 e 25 :Peso normal

Acima de 25 e abaixo ou igual a 30: Acima do peso

Acima de 30 : Obeso

	*/
	
        imc = peso/(altura*altura);
        
        if (imc <18.5){
            printf("IMC = %.2f (abaixo do peso)\n", imc);
        }
        
        else if ( imc >= 18.5 && imc <= 25 ){
            printf("IMC = %.2f (peso normal)\n", imc);
        }
        
        else if ( imc >= 25 && imc <= 30 ){
            printf("IMC = %.2f (Acima do peso)\n", imc);
        }
        
        else{
            printf("IMC = %.2f (Obeso)\n", imc);
        }
        
        
        
        return 0;
}        
