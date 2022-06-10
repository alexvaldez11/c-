#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
//José Alejandro valdez
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};
void insertar_cola(Nodo *&,Nodo *&, int );
bool cola_vacia(Nodo *);
void menu();
void suprimir_cola(Nodo *&,Nodo *&, int &);
void insertar_pila(Nodo *&, int);
void sacar_pila(Nodo *&, int &);

int main (){
    menu();
	getch();
	return 0;
}

void menu(){
	int opc;
	int cant,dato;
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	Nodo *pila =NULL;
	do{
	
	cout<<"\t:menu: "<<endl;
	cout<<"1. Insertar un caracter a una cola: "<<endl;
	cout<<"2. Mostrar elementos de la cola: "<<endl;
	cout<<"3. Insertar un caracter e una fila: "<<endl;
	cout<<"4. Mostrar elementos de una cola: "<<endl;
	cout<<"5. Salir "<<endl;
	cout<<"Opcion: ";
	cin>>opc;
	
	switch(opc){
		case 1:
		cout<<" Digite un numero: ";
		cin>>dato;
	    insertar_cola(frente,fin,dato);	
			break;
		case 2:
			cout<<" mostrando elementos de la cola: "<<endl;
			while(frente != NULL){
				suprimir_cola(frente,fin,dato);
				if(frente!= NULL){
					cout<<dato<<" , ";
				}
				else{
					cout<<dato<<".";
				}
				
			}
			system("pause");
		   break;
		case 3:
		cout<<" Digite un numero: ";
		cin>>dato;
	    insertar_pila(pila,dato);
		   break;
		case 4: 
		cout<<"sacando los elementos de la pila: "<<endl;
		while (pila != NULL){
			sacar_pila(pila,dato);
			if (pila != NULL){
				cout<<dato<<" , ";
			}
			else{
				cout<<dato<<".";
			}
			
		}
		 system("pause");
		   break;
		case 5:	
		   break;
	}
     system("cls");
	}while(opc != 5);
   	
  }

void insertar_cola(Nodo *&frente,Nodo *&fin, int n){
	Nodo *nuevo_nodo= new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente= NULL;
	
	if(cola_vacia(frente)){
		frente= nuevo_nodo;
	}
	else {
		fin->siguiente =nuevo_nodo;
	}
	fin= nuevo_nodo;

}
//funcion para determinar si la cola esta vacia o no
bool cola_vacia(Nodo *frente){
	return (frente ==NULL)? true : false;
}
void suprimir_cola(Nodo *&frente,Nodo *&fin, int &n){
	n= frente->dato;
	Nodo *aux= frente;
	if(frente==fin){
		frente= NULL;
		fin== NULL;
	}
	else{
		frente= frente->siguiente;
	}
	delete aux;
}
void insertar_pila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente = pila;
	pila= nuevo_nodo;
	
}
void sacar_pila(Nodo *&pila, int &n){
	Nodo *aux= pila;
	n= aux->dato;
	pila= aux->siguiente;
	delete aux;
}

