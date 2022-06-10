#include<iostream>
#include<stdio.h>
#include<stdlib.h>
/* es una lista doble enlazada , una que es de 10 numeros de multiplos de 10 
y la otra lista es de el 11 al 20 ,  las son iguales en tamaños pero no en contenido */
	class nodo_doble {
	
	public:
		int id;
		 nodo_doble *sig;
		 nodo_doble *ant;
	protected:
		
};

class nodo_doble2 {
	
	public:
		int id;
		 nodo_doble2 *sig;
		 nodo_doble2 *ant;
	protected:
		
};

void agregar(int);
void presentar_inicio();
void presentar_final();
void agregar2(int);
void presentar_inicio2();
void presentar_final2();

nodo_doble *i, *f, *t;
nodo_doble2 *i2, *f2, *t2;

int main (int argc, char** argv){
 for(int i=1; i<=10; i++){
 	agregar(i*10);
 	
 }
 for(int i=1; i<=10; i++){
 	agregar2(i+10);
 	
 }
 
 	std:: cout<<" PRESENTAR POR EL  INICIO Lista 1 "<<std::endl;
 presentar_inicio();
 	std:: cout<<" PRESENTAR POR EL  FINAL Lista 1 "<<std::endl;
 presentar_final();
 std:: cout<<" PRESENTAR POR EL  INICIO Lista 2 "<<std::endl;
 presentar_inicio2();
 	std:: cout<<" PRESENTAR POR EL  FINAL Lista 2 "<<std::endl;
 presentar_final2();
	return 0;
}

void agregar(int x){
	t = new nodo_doble();
	t->id=x;
	t->sig=NULL;
	t->ant=NULL;
	
	if(i==NULL){
		i=t;
	}
	else {
		f->sig=t;
		t->ant=f;
	}
	f=t;
}
void agregar2(int x){
	t2 = new nodo_doble2();
	t2->id=x;
	t2->sig=NULL;
	t2->ant=NULL;
	
	if(i2==NULL){
		i2=t2;
	}
	else {
		f2->sig=t2;
		t2->ant=f2;
	}
	f2=t2;
}
void presentar_inicio(){
	t=i;
	while(t!=NULL){
		std:: cout<<"ID: "<<t->id<<std::endl;
		t=t->sig;
	}
	
}
void presentar_final(){
	t=f;
	while(t!=NULL){
	  	std:: cout<<"ID: "<<t->id<<std::endl;
		t=t->ant;
	}
}
void presentar_inicio2(){
	t2=i2;
	while(t2!=NULL){
		std:: cout<<"ID: "<<t2->id<<std::endl;
		t2=t2->sig;
	}
	
}
void presentar_final2(){
	t2=f2;
	while(t2!=NULL){
	  	std:: cout<<"ID: "<<t2->id<<std::endl;
		t2=t2->ant;
	}
}
