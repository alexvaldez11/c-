#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
//José Alejandro valdez
using namespace std;




int main () {
	int opc;
	int x[10], y[10];
	int i=0;
	do{
	
	cout<<"\t:menu: "<<endl;
	cout<<"1. Insertar un caracter a una cola estatita: "<<endl;
	cout<<"2. Mostrar elementos de la cola estatica : "<<endl;
	cout<<"3. Insertar un caracter e una fila estatica : "<<endl;
	cout<<"4. Mostrar elementos de una cola estatica: "<<endl;
	cout<<"5. Salir "<<endl;
	cout<<"Opcion: ";
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"digita un numero: ";
			cin>>x[i];
			i=i+1;
			break;
		case 2:
			for (int j=0; j<i; j++){
				cout<<x[j]<<" , ";
				
			}
			system("pause");
		break;
		case 3:
			cout<<"digita un numero: ";
			cin>>y[i];
			i=i+1;
		break;
		 case 4:
		 	for (int j=i-1; j>=0; j--){
		 		cout<<x[j]<<" , ";
		 		system("pause");
			 }
		 break;
		 case 5:
		 	break;
		 	
	} 
	system("cls");
}while(opc != 5);

 getch();
 return 0;

}


	
