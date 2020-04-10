/*Implemente um algortimo onde o usuário entre com 
o seu nome e sobrenome(1*), após ele informe sua 
altura e peso. Deve ser apresentado na tela 
a seguinte informação.

Olá Nairo voce está com o IMC:23.36 e está
classificado como NORMAL

1* Entre com o nome e sobrenome: Nairo Sanches
O índice é calculado da seguinte maneira: divide-se o peso do paciente pela sua altura elevada ao quadrado
MENOR QUE 18,5	MAGREZA	0
ENTRE 18,5 E 24,9	NORMAL	0
ENTRE 25,0 E 29,9	SOBREPESO	I
ENTRE 30,0 E 39,9	OBESIDADE	II
MAIOR QUE 40,0	OBESIDADE GRAVE
*/ 

#include <iostream>
#include <string.h>
using namespace std;

class imc
{
	public:
        
		float resultado;
		void calc(float peso, float altura, string nome, string sobreNome);
};

void imc::calc(float peso, float altura, string nome, string sobreNome)
{
	
	resultado = (peso / (altura * altura));
	
	if(resultado < 18.5){
		
	cout << fixed;
    cout.precision(2); 	
	cout << "Ola " << nome << " " << sobreNome << " O seu IMC eh: " << resultado << " e esta classificado como 'Magreza'";
	
   }else if(resultado >= 18.5 and resultado <= 24.9){
   	
   	cout << fixed;
    cout.precision(2);
   	cout << "Ola " << nome << " " << sobreNome << " O seu IMC eh: " << resultado << " e esta classificado como 'Normal'";
	
   }else if(resultado >= 25.0 and resultado <= 29.9){
   	
   	cout << fixed;
    cout.precision(2);
    cout << "Ola " << nome << " " << sobreNome << " O seu IMC eh: " << resultado << " e esta classificado como 'Sobrepeso'";
	
   }else if(resultado >= 30.0 and resultado <= 39.9){
   	
   	cout << fixed;
    cout.precision(2);
    cout << "Ola " << nome << " " << sobreNome << " O seu IMC eh: " << resultado << " e esta classificado como 'Obesidade'";
	
   }else if(resultado > 40.0){
   	
   	cout << fixed;
    cout.precision(2);
   	cout << "Ola " << nome << " " << sobreNome << " O seu IMC eh: " << resultado << " e esta classificado como 'Obesidade Grave'";
   	
   }else{
   	
   	cout << "ERRO - Valores Invalidos, repita a operação";
   	
   } 
   
}
int main()
{
	// Inicia os Ojetos e declara variavel - Start
	imc calculaIMC;
	string nome;
	string sobreNome;
	float peso;
	float altura;
	// Inicia os Ojetos e declara variavel - End
	
	// Orienta o usário - Start
	cout << "Digite seu Nome: "; 
	cin >> nome;
	cout << endl;
	cout << "Digite seu Sobrenome: ";
	cin >> sobreNome;
	cout << endl;
	cout << "------------------------------";
	cout << endl;
	cout << "Lembre-se, separe as casa decimais com '.' Ex : 1.7";
	cout << endl;
	cout << endl;
	cout << "Digite o seu peso: ";
	cin >> peso;
	cout << endl;
	cout << "Digite a sua altura: ";
	cin >> altura;
	cout << endl; 
	// Orienta o usário - End
	
	calculaIMC.calc(peso, altura, nome, sobreNome);
}

