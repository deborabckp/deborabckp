#include <stdio.h> 

void teste(char *x){ //fiz uma função com o nome 'teste', e declarei no parâmetro um ponteiro 'x' do tipo char
  
  printf("O tamanho de x é: %d\n",strlen(x)); //imprimi o tamanho de x 
  
  for(int i = 0; i < 8; i++){ //uma estrutura de repetição para imprimir o conteúdo do vetor 
    
    printf("%c",x[i]); 
  }
} 

int main(){ 
  
  char vetor[6]= {'D', 'e', 'b', 'o', 'r', 'a'}; //declarei um vetor de tamanho 6, do tipo char e já inicializei o conteúdo 
  
  printf("O tamanho do vetor é: %d\n",strlen(vetor)); //imprimi o tamanho do vetor 
  
  teste(&vetor); //chamei a função e passei o endereço do vetor 
  
  return 0;
  
}
