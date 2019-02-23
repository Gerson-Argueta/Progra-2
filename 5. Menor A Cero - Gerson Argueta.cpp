//Programa hecho por: Gerson Rene Argueta Martinez
//Carnet: AM18047

//Libreria utilizada
#include <iostream>

using namespace std;

void menorAcero(int *val_1, int *val_2) /* prototipo de la función */
{
	//Lo que se imprimira en pantalla para los resultados
	cout<<"Resultado de el valor de los numeros: "<<endl;
	
	//La condicion se cumplira si el primer numero ingresado es mayor que el segundo
	if (*val_1 > *val_2)
	{
		//El valor de el segundo numero se fijara a 0
		val_2 = 0;
		//Lo que se imprimira en la pantalla 
		cout << "\n\nEl segundo numero es el menor y es fijado a: " << val_2 << endl;
	
	}
	//La condicion se cumplira si el segundo numero ingresado es mayor que el primero
	else if (*val_1 < *val_2)
	{
		//El valor de el primer numero se fijara a 0
		val_1 = 0;
		//Lo que se imprimira en la pantalla 
		cout << "\n\nEl primero numero es el menor y es fijado a: " << val_1 << endl;
	}
	
	//Si ninguna de los condiciones anteriores se cumplen se le dira al usuario
	else
	{
		//Lo que se imprimira en la pantalla 
		cout << "\n\nLos dos numeros son iguales por lo tanto ninguno se puede fijar a 0" << endl;
	}
}

//Funcion principal
int main ()
{
	//Variables utilizadas
	int x;
	int y;
	
	//solicitud al usuario que digite los valores
	cout << "Ingrese el valor del primer numero: " << endl;
	cin >> x;
	cout << "Ingrese el valor del segundo numero: " << endl;
	cin >> y;
	
	//Llamado a la funcion "menorAcero()"
	menorAcero(&x,&y);
	
	//No se retornara ningun valor
	return 0;
}
