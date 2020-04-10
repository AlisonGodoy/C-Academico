/// implemente um algoritmo que o usuário entre com 6 numeros inteiros
/// e o sistema informe quantos numeros pares exitem, quantos impares,
/// e quantos menores que 3(tres).
 
#include <stdio.h>
int main ()
{
    char valores[6];
    char valoresPar[6];
    char valoresImpar[6];
    char valorMenorTr[6];
 
	int  i, j, par, impar, menortr, write;	
	
	/// Entrada de dados - Inicio
	for(i=0;i<=5;i++){	   
	    printf ("\nDigite o valor do vetor na posicao:%d \n: ",i);
	    scanf("%d", &valores[i]); // 
     
    }
	/// Entrada de dados - Fim
	
	// Tratamento dos dados - Inicio
	 
	for(j=0;j<=5;j++){
		
		/// par ou impar	
		if(valores[j]%2==0){
			 par++;
			 valoresPar = par;	
	    }else{
	    	 impar++;	    	
		}
	 
	  //// menores
	   if(valores[j]<3){
	   	    menortr++;
	   } 	   
	  
	}	
	// Tratamento dos dados - Fim
	
	/// Saida dos dados - Inicio	
	 printf ("\nA quantidade de Valores Pares é: %d  %d ",par, );
     printf ("\nA quantidade de Valores Pares é: %d ",impar );
     printf ("\nA quantidade de Valores menores que 3 é: %d ",menortr );
 
    /// Saida dos dados - Fim
    //system("PAUSE");
    return(0);
}
