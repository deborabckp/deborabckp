//Tabuada

#include<stdio.h>
#include<locale.h>

int main(){

    int vetor[11];
    int n1;

    printf("Digite a tabuada que você quer:\t");

    scanf("%d", &n1);

    printf("\n");

    printf("TABUADA:\n");

    for(int i = 0; i < 11; i++){
        printf("%d * %d = %d\n", n1, i, n1*i);
    }

    return 0;
}
