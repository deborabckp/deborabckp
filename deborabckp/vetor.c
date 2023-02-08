#include <stdio.h> 
  void inverte (int vet[], int n){ //criei uma função com o nome 'inverte' e nos parâmetro passei um vetor do tipo inteiro e uma variável 'n' do tipo inteiro 
    
    int aux[n]; //criei um vetor aux do tipo inteiro de tamanho n 
    
    int contador; //criei um contador do tipo inteiro 
    
      for(contador = 0; contador < n; contador++){ //estrutura de repetição para atribuir o vet ao aux 
        
        aux[contador] = vet[contador]; 
      }
    
      for(contador = 0; contador < n; contador++){ //estrutura de repetição para inverter os valores do vet 
        
        vet[contador] = aux[n - 1 - contador]; 
        
  }
    
  } 

  int main(){ 
    
  int vet[5] = {1,2,3,4,5}; //criei um vetor 'vet' do tipo inteiro, de tamanho 5 e passei os números 
    
  int count; //criei uma variável count do tipo inteiro 
    
  inverte(vet,5); //chamei a função e mandei vet e o tamanho para a função 
    
    for(count=0;count<5;count++){ //estrutura de repetição pra imprimir o que está dentro do vetor 
    
      printf("%d\t",vet[count]); 
      
  } 
    
    return 0;
    
  }
