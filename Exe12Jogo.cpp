// Nome: Adivinhe.cpp 
// Descrição: implementação de jogo de adivinhação de números
//
// Bibliotecas básicas utilizadas
//#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
// Espaço de nomes utilizado
using namespace std;
//programa principal

int main()
{
	int numPalpite; // variavel para o usario declarar seu numero de tentaivas
	system("cls"); // comando para Limpar a tela
	
	// Comandos para Imprimir na tela as regras do jogo - Start
	cout << "Jogo de Adivinhacao" << endl;
	cout << endl;
	cout << "Escolha o numero de palpites que voce deseja:  ";
	cin >> numPalpite;
	cout << endl;
	cout << "O numero sorteado encontra-se no intervalo de [0, 10]." << endl;
	cout << endl;
	// Comandos para Imprimir na tela as regras do jogo - End
	
	// Inicializa o gerador de números randômicos - Start
	srand( (unsigned)time( NULL ) ); 		// Sortear um número entre [0,10] e armazenar na variável "numero_sorteado"
	int numeroSorteado = rand() % 10; 
	// Inicializa o gerador de números randômicos - End
	
	// Declaração de variaveis e estrutura de repetição - Star
	int palpiteJogador = 0;   
	int i = palpiteJogador;
	int j;
	
	for(i = 0; i < numPalpite; i++){
		
	     cout << "Tentativa... Digite um numero: ";
	     cin >> palpiteJogador;
	     
	     if(palpiteJogador == numeroSorteado){
		
		cout << endl << "Parabens !!! Voce acertou o numero sorteado !" << endl;
		
	} else if(numeroSorteado < palpiteJogador){
		
		cout << "Voce errou, o numero sorteado eh menor que o seu palpite" << endl;
		
	} else
	 
       cout << "Voce errou, o numero sorteado eh maior que o seu palpite" << endl;
}
    // Declaração de variaveis e estrutura de repetição - End
   
	// Testar se o palpite do jogador é igual ao número sorteado
	if(palpiteJogador == numeroSorteado){
		
		cout << endl << "Parabens !!! Voce acertou o numero sorteado !" << endl;
		
	} else{
		
		cout << "Voce errou o numero sorteado" << endl;
	}
	
	system("pause");
	return 0;
}
