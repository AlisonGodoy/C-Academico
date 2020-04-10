/* Implemente um algoritmo que simule uma calculadora.
   Obs: apenas dois valores de entrada e o operador / deve ser orientada a objetos. 
*/

#include <iostream>
#include <math.h>
using namespace std;

class calculadora 
{
	// Declaração dos métodos privados da classe - Start
	private:
		
		void soma(float valor01, float valor02);
		void subtrai(float valor01, float valor02);
		void multiplica(float valor01, float valor02);
		void divide(float valor01, float valor02);
	// Declaração dos métodos privados da classe - End	
		
	// Declaração dos métodos públicos da classe - Start		
	public:
		float resultado;
	    void resolveTudo(float valor01, float valor02, char opera);		 
	// Declaração dos métodos públicos da classe - End
};

// Inicia Subclasse
class filhoCalculadora: public calculadora
{
	public: 
	float raizQuadrada(float valor01);

};
// Encerra Subclasse

// Inicia Método da Sublasse
float filhoCalculadora::raizQuadrada(float valor01)
{
float result;
result = sqrt(valor01);
return result;

}
// Encerra Método da Subclasse

    // Método que soma - Start
void calculadora::soma(float valor01, float valor02)
{
	//Inicia Obj Filho
	filhoCalculadora objFilho;
	//Encerra Obj Filho
	
        resultado = (valor01 + valor02);
        cout << "O resultado eh " << resultado << endl;
        cout << "Raiz quadrada eh " << objFilho.raizQuadrada(resultado);
}
    // Método que soma - End

    // Método que subtrai - Start
void calculadora::subtrai(float valor01, float valor02)
{      
    //Inicia Obj Filho
	filhoCalculadora objFilho;
	//Encerra Obj Filho
	
        resultado = (valor01 - valor02);
        cout << "O resultado eh " << resultado << endl;
        cout << "Raiz quadrada eh " << objFilho.raizQuadrada(resultado);
}
    // Método que subtrai - End
    
    // Método que multiplica - Start
void calculadora::multiplica(float valor01, float valor02)
{   
    //Inicia Obj Filho
	filhoCalculadora objFilho;
	//Encerra Obj Filho 
	
        resultado = (valor01 * valor02);
        cout << "O resultado eh " << resultado << endl;
        cout << "Raiz quadrada eh " << objFilho.raizQuadrada(resultado);
}   
    // Método que multiplica - End
     
    // Método que divide - Start
void calculadora::divide(float valor01, float valor02)
{
	//Inicia Obj Filho
	filhoCalculadora objFilho;
	//Encerra Obj Filho
	
        resultado = (valor01 / valor02);
        cout << "O resultado eh " << resultado << endl;
        cout << "Raiz quadrada eh " << objFilho.raizQuadrada(resultado);
}
    // Método que divide - End
    
    //Método que faz a operação - Start
void calculadora::resolveTudo(float valor01, float valor02, char opera) 
{	
	if(opera == '+'){
		
		soma(valor01,valor02);
		
	}else if(opera == '-'){
		
		subtrai(valor01,valor02);
		
    }else if(opera == '*' or opera == 'x' or opera == 'X'){
    	
    	multiplica(valor01,valor02);
    	
	}else if(opera == '/' or opera == '%'){
		
		divide(valor01,valor02);
		
	}else
	
	   cout << "ERRO - Operador Invalido - Os operadores validos sao: -; +; * ou x ou X; / ou %;";
	   //Método que faz a operação - End
  }  
int main()
{
	// Inicia os Ojetos e declara variavel - Start
	calculadora contaFinal;
	
	float valor01;
	float valor02;
	char opera;
	// Inicia os Ojetos e declara variavel - End
	
	// Orienta o usário - Start
	cout << "Lembre-se, numeros com casas decimais devem ser separados com '.' Ex : 10.5";
	cout << endl;
	cout << "------------------------------";
	cout << endl;
	cout << "Digite o primeiro valor: ";
	cin >> valor01;
	cout << endl;
	cout << "Digite o operador: ";
	cin >> opera;
	cout << endl;
	cout << "Digite o terceiro valor: ";
	cin >> valor02;
	cout << endl; 
	// Orienta o usário - End
	
	   contaFinal.resolveTudo(valor01,valor02, opera);
}
    
