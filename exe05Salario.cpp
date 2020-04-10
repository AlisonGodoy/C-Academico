//Implemente um algoritimo onde o usuario digite o valor bruto do seu salário e mostre na tela o valor de seu salario liquido INSS e IRRF
/*IRRF
Até 1.903,98	-	-
De 1.903,99 Até 2.826,65	7,50   
De 2.826,66 Até 3.751,05	15,00	
De 3.751,06 Até 4.664,68	22,50	
Acima De 4.664,68                  

INSS
Até R$ 1.751,81	                 8,00
De R$ 1.751,82 A R$ 2.919,72	9,00
De R$ 2.919,73 Até R$ 5.839,45	11,00
*/
#include <stdio.h>
#include <stdlib.h>
 
int main(){
	
//Declaração de Variaveis
float salarioBruto;
float salarioLiquido;
float descontoInss;
float descontoIrrf;

float inssA;
float inssB;
float inssC;
float valorTeto;

float dedIrrfA;
float dedIrrfB;
float dedIrrfC;
float dedIrrfD;
float irrfA;
float irrfB;
float irrfC;
float irrfD;
//

// Agregando valores as variaveis
salarioLiquido = 0;
salarioBruto   = 0;

inssA          = 0.08;
inssB          = 0.09;
inssC          = 0.11;
valorTeto      = 642.34;

dedIrrfA       = 142.80;
dedIrrfB       = 354.80;
dedIrrfC       = 636.13;
dedIrrfD       = 869.36;

irrfA          = 0.075;
irrfB          = 0.15;
irrfC          = 0.225;
irrfD          = 0.275;
//

printf("Digite o valor do Salario Bruto \n");
scanf("%f", &salarioBruto);

    ///Dados para as faixas salariais SEM desconto do IRRF
    if(salarioBruto < 1751.81){ 
     
	 descontoInss   = (salarioBruto * inssA);
	 salarioLiquido = (salarioBruto - descontoInss);
	         
    }else if(salarioBruto > 1751.82 and salarioBruto < 2093.00){
  	 
	 descontoInss   = (salarioBruto * inssB);
	 salarioLiquido = (salarioBruto - descontoInss);
	}
    ///
    
    ///Dados para as faixas salarias COM desconto do IRRF
    if(salarioBruto > 2093.01 and salarioBruto < 2919.72){
    	
     descontoInss   = (salarioBruto * inssB);	
   	 descontoIrrf   = irrfA * (salarioBruto - descontoInss) - dedIrrfA;
   	 salarioLiquido = (salarioBruto - descontoInss) - descontoIrrf;
   	 
    }else if(salarioBruto > 2919.73 and salarioBruto < 3176.01){
    	
     descontoInss   = (salarioBruto * inssC);	
   	 descontoIrrf   = irrfA * (salarioBruto - descontoInss) - dedIrrfA;
   	 salarioLiquido = (salarioBruto - descontoInss) - descontoIrrf;
   	 
	}else if(salarioBruto > 3176.02 and salarioBruto < 4214.66){
    	
     descontoInss   = (salarioBruto * inssC);	
   	 descontoIrrf   = irrfB * (salarioBruto - descontoInss) - dedIrrfB;
   	 salarioLiquido = (salarioBruto - descontoInss) - descontoIrrf;
   	 
    }else if(salarioBruto > 4214.67 and salarioBruto < 5241.21){
    	
     descontoInss   = (salarioBruto * inssC);	
   	 descontoIrrf   = irrfC * (salarioBruto - descontoInss)  - dedIrrfC;
   	 salarioLiquido = (salarioBruto - descontoInss) - descontoIrrf; 
		
	}else if(salarioBruto > 5241.22 and salarioBruto < 5839.45){
     
	 descontoInss   = (salarioBruto * inssC);
   	 descontoIrrf   =  irrfD * (salarioBruto - descontoInss) - dedIrrfD;
   	 salarioLiquido = (salarioBruto - descontoInss) - descontoIrrf;
   	 
    }else if(salarioBruto > 5839.46){
    
     descontoInss   = valorTeto;
   	 descontoIrrf   =  irrfD * (salarioBruto - descontoInss) - dedIrrfD;
   	 salarioLiquido = (salarioBruto - descontoInss) - descontoIrrf;
   }
	///
	
	///Escrita dos Resultados
	printf("Desconto do INSS = %.2f\n", descontoInss);
    printf("Desconto do IRRF = %.2f\n", descontoIrrf);
    printf("Valor do Salario Liquido = %.2f\n", salarioLiquido);
    ///
  
  system ("PAUSE");
  return 0; 
}
