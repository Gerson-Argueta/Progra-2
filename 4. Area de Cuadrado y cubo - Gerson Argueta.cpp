//Programa hecho por: Gerson Rene Argueta Martinez
//Carnet: AM18047

//Librerias utilizadas
#include <iostream>
#include <math.h>

using namespace std;

int area(){ /* prototipo de la función */
	
	//Variables utilizadas
	int lado;
	int areaCuad;
	int areaCub;
	
	//solicitud al usuario que digite el valor de uno de los lados de las figuras
	cout<<"Por favor ingrese el valor de uno de los lados, el valor que ingrese \nfuncionara para el area de el cuadrado y el cubo: "; cin>>lado;
	
	//Operaciones que se efectuaran para dar el resultado del area de las determinadas figuras geometricas
	areaCuad = lado * lado;
	areaCub = 6 * lado *lado;
	
	//Resultados que se imprimiran en pantalla,
	cout<<"\n\nEl area de las figuras geometricas son: "<<endl;
	cout<<"\nEl area de el cuadrado es: "<< areaCuad <<endl;
	cout<<"El area de el cubo es: "<< areaCub <<endl;
	
}

//Funcion principal
int main(){	
	
	area();	//Llamado a la funcion "area()"
	
	//No se retorna ningun valor
	return 0;
	
}
