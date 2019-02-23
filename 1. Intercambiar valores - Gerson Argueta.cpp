//Programa hecho por: Gerson Rene Argueta Martinez
//Carnet: AM18047

//Libreria utilizada
#include<iostream>

using namespace std;

//Funcion que realiza el intercambio de valores
int mayor(){
	
	//Variables utilizadas
	int x,y, aux;
	
	//solicitud al usuario que digite los valores
	cout<<"Digite el valor del primer numero: "; cin>>x;
	cout<<"Digite el valor del segundo numero: "; cin>>y;
	
	//Condicion que se debe de cumplir para que se realice el intercambio de valores
	if (x > y){
		
		//Operacion que se realiza para intercambiar los valores
		aux = x;
		x = y;
		y = aux;
		
		//Mensajes que se imprimiran en pantalla y mostraran el resultado del intercambio de valores
		cout<<"\n\nEL RESULTADO DE LOS VALORES DE LOS NUMEROS INTERCAMBIADOS \nAL SER EL PRIMER NUMERO MAYOR QUE EL SEGUNDO NUMERO SON: "<<endl;
		cout<<"\nEl nuevo valor del primer numero es: "<<x<<endl;
		cout<<"El nuevo valor del segundo numero es: "<<y<<endl;
	}
	
	//Si no se cumple la condicion anterior se realizara este procedimiento de impresion
	else{
		
		//Mensajes que se imprimiran en pantalla y mostraran el resultado de los valores tal y como fueron ingresados
		cout<<"\n\nEL RESULTADO DE LOS VALORES DE LOS NUMEROS AL NO PODERSE INTERCAMBIAR AL \nSER MENOR O IGUAL EL PRIMER NUMERO AL SEGUNDO SON: "<<endl;
		cout<<"\nEl valor del primer numero: "<<x<<endl;
		cout<<"El valor del segundo numero: "<<y<<endl;
	}	
	
	
}

//Funcion principal
int main(){
	
	//Llamado a la funcion "mayor()"
	mayor();
	
	//No se retorna ningun valor
	return 0;
}


