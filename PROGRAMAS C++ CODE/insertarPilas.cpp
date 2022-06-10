#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>//new
using namespace std;

//instertar elementos en la pila

struct Nodo {
	int dato;
	Nodo *siguiente;
	
};

void agregarpila(Nodo *&, int);//prototipo

int main(){
	Nodo *pila = NULL;
	int cant;
	
	cout<<" cuantos numeros quieres en la pila: ";
	cin>> cant;
	int x[cant];
	
	for (int i=0; i<cant; i++){
		cout<<" digite un numero: ";
		cin>>x[i];
		agregarpila(pila,x[i]);
	}
	
	
	getch();
	return 0;
}

void agregarpila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente = pila;
	pila= nuevo_nodo;
	
	cout<<"\n el numero "<<n<<" esta en la pila correctamente"<<endl;
}


