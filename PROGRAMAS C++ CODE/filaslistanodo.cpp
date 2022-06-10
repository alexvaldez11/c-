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

nodo *first=NULL, *Nodo, *last=NULL;

NODO getnodo(){
	NODO p;
	p= new nodo;                                   
	cout<<"Captura el valor de info: "<<endl;
	cin>>p->info;      //captura el campo de info para p->info
	p->next = NULL;    //asigna p-next a 0
	return p;          //regresa una estructura dinamica
}

void insertarnodo(NODO p){
	if(first==NULL){
		first=last=p;
	}
	last->next=p;
	last=p;
}

int main() {
	
int i=0;
NODO *Nodo, *p;
first=getnodo();
cout<<" El contenido del info de first es: "<<first->info<<endl;
cout<<" El contenido del apuntador de first es: "<<first->next<<endl;
cout<<" La direccion de first es:  "<<first<<endl;

cout<<"crear lista de 5"<<endl;

while(i != 5){
 *Nodo = getnodo();
 insertarnodo(*Nodo);
 i++;	
}
cout<<"recorre la lista"<<endl;
*p=first;

do{
	cout<<"el valor de info es:"<<p->info<<endl;
	p= *p->next;
	
}
while (p != NULL);

getch();
return 0;
}
