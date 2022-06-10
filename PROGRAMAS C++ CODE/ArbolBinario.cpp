#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

using namespace std;

struct Nodo {
	int dato;
	Nodo *izq;
	Nodo *der;
};

Nodo *crear_nodo(int );
void insertar_nodo(Nodo *&,int );
void post_order(Nodo *);
void in_order(Nodo *);
void pre_order(Nodo *);
void mostrar_arbol(Nodo *,int );
void menu();
Nodo *arbol = NULL;

int main(){
	int num,hojas;
	srand(time(NULL));
	cout<<" Digita el numero que sera la raiz del arbol binario: "<<endl;
	cin>>num;
	insertar_nodo(arbol,num);
	for (int i=0; i<= 8; i++){
		hojas = rand() % 80 +1;
	insertar_nodo(arbol,hojas);
	}
	menu();
	getch();
	return 0;
	
}

void menu(){
	int opc, contador=0;
	do{
		system("cls");
	mostrar_arbol(arbol,contador);
	cout<<"\t Creacion de arbol binaria de 10 nodos finalizada"<<endl;
	cout<<"1. Recorrido pre orden"<<endl;
	cout<<"2. Recorrido in orden "<<endl;
	cout<<"3. Recorrido post orden"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<" Opcion: ";
	cin>>opc;
	
	
	switch (opc){
		case 1:
			cout<<"Recorrido en pre orden: \n";
			pre_order(arbol);
			cout<<"\n\n";
			system("pause");
			break;
		case 2:
			cout<<"Recorrido en in orden: \n";
			in_order(arbol);
			cout<<"\n\n";
			system("pause");
			break;
		case 3:
			cout<<"Recorrido en post orden: \n";
			post_order(arbol);
			cout<<"\n\n";
			system("pause");
			break;
		case 4 :
			break;
	
      }
      system("cls");
   } while(opc!=4);
}

Nodo *crear_nodo(int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->izq= NULL;
	nuevo_nodo->der= NULL;
	return nuevo_nodo;
}

void insertar_nodo(Nodo *&arbol , int n){
	if (arbol == NULL){
		Nodo *nuevo_nodo= crear_nodo(n);
		arbol= nuevo_nodo;
		
	}
	else {
		int valor_raiz = arbol->dato;
		if (n < valor_raiz){
			insertar_nodo(arbol->izq,n);
		}
		else{
			insertar_nodo(arbol->der,n);
		}
	}
}
void pre_order(Nodo *arbol){
	if (arbol == NULL){
		return;
	}
	else {
		cout<<arbol->dato<<" - ";
		pre_order(arbol->izq);
		pre_order(arbol->der);
	}
}
void post_order(Nodo *arbol){
	if (arbol == NULL){
		return;
	}
	else {
		
		post_order(arbol->izq);
		post_order(arbol->der);
		cout<<arbol->dato<<" - ";
	}
}
void in_order(Nodo *arbol){
	if (arbol == NULL){
		return;
	}
	else {
		in_order(arbol->izq);
		cout<<arbol->dato<<" - ";
		in_order(arbol->der);
	}
}
void mostrar_arbol(Nodo *arbol, int cont){
	if(arbol== NULL){
		return;
	}
	else {
		mostrar_arbol(arbol->der,cont+1);
		for (int i=0;i<cont; i++){
			cout<<"  ";
		}
		cout<<arbol->dato<<endl;
		mostrar_arbol(arbol->izq,cont+1);
	}
}
