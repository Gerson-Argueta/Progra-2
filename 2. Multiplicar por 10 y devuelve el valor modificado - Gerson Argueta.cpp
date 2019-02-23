//Programa hecho por: Gerson Rene Argueta Martinez
//Carnet: AM18047

//Librerias utilizadas
#include <iostream>
#include <stdio.h>

using namespace std;

void sumar_referencia(int *numero); /* prototipo de la función */

//Funcion principal
int main()
{
	int numero; //Variable utilizada
	
	//solicitud al usuario que digite el valor
	cout<<"Digite un numero: "; cin>>numero;

	sumar_referencia(&numero); /* enviamos numero a la función */

	return 0;
}

//Funcion que realiza la multiplicacion y modificacion del numero
void sumar_referencia(int *numero)
{
	*numero *= 10; /* le multiplicamos 10 al numero */

	/* el valor de numero recibido se multiplica por 10
	 * y se modifica dentro de la función
	 */
	//Lo que se imprimira en pantalla y el numero modificado
	cout<<"\n\nSe multiplica por 10 el numero ingresado"<<endl;
	cout<<"\nValor de numero modificado es: "<< *numero;

	return;
}
