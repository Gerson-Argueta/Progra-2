//Programa hecho por: Gerson Rene Argueta Martinez
//Carnet: AM18047

//Librerias utilizadas
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

//Funcion que realizara el calculo de la potencia
int potencia(){
	
	//Variables utilizadas
	double n;
	int p;
	
	//solicitud al usuario que digite los valores
	cout<<"Ingrese el valor de el numero a elevar a una potencia: "; cin>>n;
	cout<<"Ingrese el valor de el exponente que elevara el numero: "; cin>>p;
	
	//Operacion que se encargara de realizar el calculo de la potencia
	int r = pow (n, p);
	
	//Se imprime en pantalla el resultado de la potencia
	cout<<"\n\nResultado de la potencia: "<<r<<endl;
	
	//Se retorna el valor de r
	return r;
}

//Funcion principal
int main()
{
	//Llamado a la funcion "potencia()"
	potencia();
	
	//No se retorna ningun valor
	return 0;
}

