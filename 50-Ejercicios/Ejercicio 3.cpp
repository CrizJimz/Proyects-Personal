#include <iostream>
#include <cmath>
using namespace std;

int main(){
	

	int selector;
	double Pmtr1;
	double Pmtr2;


	cout<<"Bienvenido a la calculadora de areas\n ";
	cout<<"1-Rectangular\n 2-Circular\n 3-Triangular\n\n";
	cout<<"Que area desea calcular? ";
	cin>>selector;

	switch(selector){
	
	case 1:
		cout<<"\nIngresa los valores en cm\n";
		cout<<"Base:";
		cin>>Pmtr1;
		cout<<"Altura:";
		cin>>Pmtr2;
		Pmtr1=Pmtr1*Pmtr2;
		cout<<"El area es de "<<Pmtr1;"<< cm";
		break;
	case 2:
		cout<<"\nIngresa los valores en cm\n";
		cout<<"Radio:";
		cin>>Pmtr1;
		Pmtr1=M_PI*pow(Pmtr1,2);
		cout<<"El area es de "<<Pmtr1<<" cm";
		break;
	case 3:
		cout<<"\nIngresa los valores en cm\n";
		cout<<"Base:";
		cin>>Pmtr1;
		cout<<"Altura:";
		cin>>Pmtr2;
		Pmtr1=(Pmtr1*Pmtr2)/2;
		cout<<"El area es de "<<Pmtr1<<" cm";
		break;	
	default:
		cout<<"Opcion no valida";
		break;
	}	
	return 0;
}
