#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int op, num1, num2; 
	int soma, mult, sub;
    printf("Escolha um das op��es:\n");
    printf("1- Para Soma.\n");
    printf("2- Para Multiplica��o.\n");
    printf("3- Para Subtra��o.\n");
    printf("4- Para Sair\n");
    scanf("%d", &op);
    switch(op)
	{
	case 1:
		printf("Informe os 2 valores:\n");
		scanf("%d%d", &num1, &num2) ;
		soma= num1 + num2;
		printf("A soma � %d: ", soma);
		break;
	case 2:
		printf("Informe os 2 valores:\n");
		scanf("%d%d", &num1, &num2);
		mult= num1 * num2;
		printf("A multiplica��o � %d: ", mult);
		break;
	case 3:
		printf("Informe os 2 valores:\n");
		scanf("%d%d", &num1, &num2);
		sub = num1 - num2;
		printf("A sutra��o � %d: ", sub);
		break;
	case 4:
		printf("Voc� terminou o programa:\n");
		break;
	default:
		printf("Inv�lido\n");
		break;
	}
    return 0;
}