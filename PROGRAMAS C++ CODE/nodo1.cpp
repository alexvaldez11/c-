#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

struct nodo
{
	int info;
	struct nodo *next;
	
};
typedef struct nodo *NODO;

nodo *first, *second;

NODO getnodo(){
	NODO p;
	
	p = new nodo;
	cout<<" captura el valor de inf: "<<endl;
	cin>>p->info;
	p->next =NULL;
    
	return p;
}

int main(){
	first= getnodo();
	second= getnodo();
	first->next=second;
	

	cout<< "el valor del info first es: "<<first->info<<endl;
	cout<< "el contenido del apuntador de first es: "<<first->next<<endl;
	cout<< "la direccion de first es: "<<first<<endl;
	cout<< "el valor del info second es: "<<second->info<<endl;
	cout<< "el contenido del apuntador de second es: "<<second->next<<endl;
	cout<< "la direccion de second es: "<<second<<endl;
	cout<<endl;
	getch();
	return 0;
	
}
