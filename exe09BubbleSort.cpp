// Implemente um algoritmo onde o usuário entre com 4 valores
// e mostre e ordem crescente os 4 valores.
// Obs: O tratamento deve ser implementado com funcoes

// Implemente um algoritmo onde o usuário entre com 4 valores
// e mostre e ordem crescente os 4 valores.
// Obs: O tratamento deve ser implementado com funcoes
 
 //4 3 5 2
 //2 4 3 5
 //2 3 4 5
 
#include <stdio.h>
#include<stdlib.h>


//// funcao ordena maior - Start
int ordenaMaior(int v[4]){
    int aux,i,p;
	//Ordenando o vetor pelo método bolha
      for (int fim = 4; fim >= 0; fim--) 
          for (i = 0; i <= fim; i++) 
         {
                if (v[i] > v[i - 1])
                {
                    aux = v[i];
                    v[i] = v[i - 1];
                    v[i - 1] = aux;
                }
         } // fim do ordenação

	for(p = 0; p <= 3; p++){
		printf("%d\n", v[p]);
	}
	
}
//// funcao ordena maior -  End

int main ()
{
	
	int valor[4];
	int t;

	printf ("\nMaior Valor\n");
	printf ("\n----------------------------\n");
	printf ("\nValor 01 :");
	scanf("%d", &valor[0]);
	printf ("\nValor 02 :");
	scanf("%d", &valor[1]);
	printf ("\nValor 03 :");
	scanf("%d", &valor[2]);
	printf ("\nValor 04 :");
	scanf("%d", &valor[3]);
	
/// bloco de tratamento 
	ordenaMaior(valor);	
/// bloco de tratamento 
	
	
	
		
    return(0);
}
