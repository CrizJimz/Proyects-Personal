#include <iostream>
#include <cctype> //Para el toupper

using namespace std;

int main(){
	
	char escala;
	double temp;
	
	cout<<"Coversor de temperaturas"<<endl<<endl;
	
	cout<<"Que temperatura desea convertir?"<<endl;
	cout<<"-Celsius >>(C)<<  -Fahrenheit >>(F)<<"<<endl<<endl;
	cout<<">>";
	cin>>escala;
	
	/*Pone las opciones en mayus*/
	escala = toupper(escala);
	
	switch(escala){
		
		case 'C':
			cout<<"Ingresa la temperatura >> ";
			cin>>temp;
			temp=(temp*(9.0/5.0))+32;
			cout<< "La temperatura en Fahrenheit es de "<<temp <<" grados ";
			break;	
		case 'F':
			cout<<"Ingresa la temperatura >> ";
			cin>>temp;
			temp=(temp-32)*((5.0/9.0));
			cout<< "La temperatura en Celsius es de "<<temp <<" grados ";
			break;
		default:
	            cout << "Opcion no valida." << endl;
	            break;
	}
	return 0;
}
