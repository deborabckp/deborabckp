//Calculadora

#include <stdio.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "Portuguese");

    char operacao;

    int n1, n2, valor;

    printf("\nEscolha qual operação você quer realizar:\n");
    printf("A -> Para adição\n");
    printf("S -> Para subtração\n");
    printf("M -> Para multiplicação\n");
    printf("D -> Para divisão\n");

    printf("Digite:\t");

    scanf("%c", &operacao);
    
    printf("\nDigite dois números para realizar a operação:\n");

    scanf("%d %d", &n1, &n2);

    switch (operacao)
    {
    case 'A':
        valor = n1 + n2;
        printf("\nO valor é: %d\t", valor);
        break;

    case 'S':
        valor = n1 - n2;
        printf("\nO valor é: %d\t",valor);
        break;

    case 'M':
        valor = n1 * n2;
        printf("\nO valor é: %d\t",valor);
        break;

    case 'D':
        valor = n1 / n2;
        printf("\nO valor é: %d\t",valor);
        break;

    default:
        printf("Operação inválida");
        break;
    }

    return 0;
}
