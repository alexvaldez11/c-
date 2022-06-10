#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
	int opc;
	int contagios[10];
	do{
	system("cls");
	cout<<"Brenda Gonzalez de Alba"<<endl;
	cout<<"1. Indicador de temperatura"<<endl;
	cout<<"2. Captura de datos de contagio de los 10 lugares "<<endl;
	cout<<"3. Mostrar los datos de contagio de los 10 lugares "<<endl;
	cout<<"4. Mostrar el lugar con mayor numero de contagios "<<endl;
	cout<<"5. Decir cuantos lugares tuvieron 0 contagios "<<endl;
	cout<<"6. Mostrar el promedio de contagios"<<endl;
	cout<<"7. salir"<<endl;
	cin>>opc;
	switch(opc){
		case 1:{
			float tem;
			system("cls");
			cout<<"¿Cual es tu temperatura? "<<endl;
			cin>>tem;
			if (tem<36){
				cout<<"muy fria temeperatura"<<endl;
			}
			else{
				if(tem<=37){
					cout<<"bien "<<endl;
				}
				else{
					if(tem<=39){
						cout<<"cuidado "<<endl;
					}
					else{
						cout<<"peligro "<<endl;
					}
				}
			}
			system("pause");
			break;
		}
		case 2:{
			system("cls");
			for(int i=0; i<=9; i++){
				cout<<"Dame el num de contagios del lugar "<<i+1<<endl;
				cin>>contagios[i];
			}
			system("pause");
			break;
		}
		case 3:{
			system("cls");
			cout<<"Mostrando los 10 lugares con sus contagios"<<endl;
			for(int i=9; i>=0; i--){
				cout<<"Lugar "<<i+1<<" : "<<contagios[i]<<" contagios"<<endl;
			}
			system("pause");
			break;
		}
		case 4:{
			int mayor, lugar;
			system("cls");
			mayor=contagios[0];
			lugar=0;
			for(int i=0; i<=9; i++)
	        {
		     if(contagios[i+1]>contagios[i]){
		     	mayor=contagios[i+1];
		     	lugar=i+1;
			 }
			}
			cout<<"El mayor lugar con numero de contagios es: Lugar "<<lugar<<" con "<<mayor<<" contagios."<<endl;
			system("pause"); 
			break;
		}
		case 5:{
			int cont=0;
			system("cls");
			for(int i=0; i<=9; i++){
				if(contagios[i]==0){
					cont++;
				}
			}
			cout<<"los lugares con 0 contagios son "<<cont<<endl;
			system("pause");
			break;
		}
		case 6:{
			int suma=0;
			float prom;
			system("cls");
			for (int i=0; i<=9; i++){
				suma=suma + contagios[i];
			}
			prom=suma/10;
			cout<<"el promedio de num de contagios es "<<prom<<endl;
			system("pause");
			break;
		}
		case 7:{
			system("cls");
			cout<<"fin del programa";
			system("pause");
			break;
		}
	}
  }while(opc!=7);

}
