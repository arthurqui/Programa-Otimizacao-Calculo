#include <stdio.h> 
#include <math.h>
#include <locale.h>

void main(){	float nas, atu, ida;	printf("Digite seu ano de nascimento completo: ");	scanf_s("%f", &nas);	printf("Digite o ano atual:\n ");	scanf_s("%f", &atu);	ida = atu - nas;		printf("sua idade eh: %f", ida);getche();}