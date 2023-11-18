/*Crear un programa que genere un número aleatorio entre 1 y 10, el usuario deberá 
adivinar el número, si acierta: felicitarlo, si falla: indicarlo. Cualquiera de los 2 casos: continuar jugando 
Ejercicio 7 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	
	srand(time(NULL));
	int numeroAletorio=rand()%10+1;
	int respuesta=0;

	cout<<endl<<"Bienvenido al juego --Adivine el numero--"<<endl;
	cout<<endl<<"----Advine el numero entre 1 al 10----"<<endl<<">> ";
	
	cin>>respuesta;

	while(respuesta!=numeroAletorio || respuesta<0||respuesta>10){
		if(respuesta<0||respuesta>10){
			cout<<"----Elige un numero entre 1 y 10"<<endl;
		}
		cout<<"----Esa no es la respuesta, intenta de nuevo----"<<endl<<">> ";
		cin>>respuesta;
	}
	
	cout<<"----Encontraste el numero----"<<endl;
	cout<<"   >>>>>>>>>>> "<<numeroAletorio<<" <<<<<<<<<<<";

	return 0;
}

