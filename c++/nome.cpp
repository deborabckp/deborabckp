// Escreva um programa que receba o nome e a idade de 2 pessoas e compare qual é a mais velha e a mais nova

#include <iostream>
using namespace std;

int main () {

    string nome[2];

    int idade;

    for(int contador = 0; contador < 2; contador++){
        cout<< "\nDigite o nome: ";
            cin >> nome[contador];
        cout<< "\nDigite a idade: ";
            cin>> idade;
    }

    if(nome[0]>nome[1]){
        cout<<"\nPessoa mais velha: "<<nome[0];
        cout<<"\nPessoa mais nova: "<<nome[1];

    }

     else{
        cout<<"\nPessoa mais velha: "<< nome[1];
        cout<<"\nPessoa mais nova: "<<nome[0];
        cout<<"\n";
    }
    return 0;
}
