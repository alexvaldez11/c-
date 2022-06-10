#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};
void insertar_cola(Nodo *&,Nodo *&, int );
bool cola_vacia(Nodo *);

int main (){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	int cant,dato;
	cout<<"cuantos datos quieres en la cola? ";
	cin>>cant;
	for(int i=0; i<cant; i++){
		cout<<" Digite un numero: ";
		cin>>dato;
	    insertar_cola(frente,fin,dato);	
	}
	getch();
	return 0;
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
	cout<<"\tElemento "<<n<<" esta en cola correctamente \n";
}
//funcion para determinar si la cola esta vacia o no
bool cola_vacia(Nodo *frente){
	return (frente ==NULL)? true : false;
}
