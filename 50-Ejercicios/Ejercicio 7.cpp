/*Crear un programa que genere un n�mero aleatorio entre 1 y 10, el usuario deber� 
adivinar el n�mero, si acierta: felicitarlo, si falla: indicarlo. Cualquiera de los 2 casos: continuar jugando 
Ejercicio 7 */

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main(){
	
	srand(time(NULL));
	char playAgain;
	char Yes='Y';
	cout<<endl<<"Bienvenido al juego --Adivine el numero--"<<endl;
	
	do{
	
	int numeroAletorio=rand()%10+1;
	int respuesta=0;
	
	system("cls");
	cout<<endl<<"----Advine el numero entre 1 al 10----"<<endl<<">> ";
	
	cin>>respuesta;

	while(respuesta!=numeroAletorio || respuesta<0||respuesta>10){
		if(respuesta<0||respuesta>10){
			cout<<"----Elige un numero entre 1 y 10"<<endl;
		}
		cout<<"----Esa no es la respuesta, intenta de nuevo----"<<endl<<">> ";
		cin>>respuesta;
	}
	
	cout<<"----Encontraste el numero----"<<endl<<endl;
	cout<<"   >>>>>>>>>>> "<<numeroAletorio<<" <<<<<<<<<<<"<<endl<<endl;
	
	cout<<"----Desea volver a jugar? (Y/N)----"<<endl<<">> ";
	cin>>playAgain;
	playAgain=toupper(playAgain);
	}
	while(playAgain==Yes);

	return 0;
}

