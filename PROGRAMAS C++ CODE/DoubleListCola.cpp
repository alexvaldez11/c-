#include<iostream>
#include<conio.h>
#include<stdlib.h>

struct node{
	int dato;
	node *prev;
	node *next;
};

class Linkedlist{
private:	
	node *header= new node;
	node *tailer= new node;
public:
	Linkedlist(){
		header=NULL;
		tailer=NULL;
	}
	
	void add_back(int);
	void print_cola();
};

void Linkedlist::add_back(int d){
	node *nuevo_nodo=new node;
	
	if (header==NULL && tailer==NULL){
		nuevo_nodo->dato =d;
		nuevo_nodo->next = header;
		nuevo_nodo->prev =header;
		
		header=nuevo_nodo;
		tailer=nuevo_nodo;
		
		std::cout<<"Nodo Creado"<<std::endl;
	}
	else{
		nuevo_nodo->dato =d;
		
		nuevo_nodo->prev=tailer;
		tailer->next=nuevo_nodo;
		nuevo_nodo->next = tailer;
		
		tailer=nuevo_nodo;
		
		std::cout<<"Nodo creado"<<std::endl;
	}
}

void Linkedlist::print_cola(){
	node* nuevo_nodo= new node;
	
	if(header==NULL&&tailer==NULL){
		std::cout<<"Cola Vacia"<<std::endl;
	}
	else{
		nuevo_nodo=header;
		
		std::cout<< nuevo_nodo->dato <<std::endl;
		
		header=nuevo_nodo->next;
		
		delete nuevo_nodo;
	}
}

int main(){
	Linkedlist l1;
	l1.add_back(21);
	l1.add_back(22);
	l1.add_back(23);
	l1.add_back(24);
	l1.print_cola();
	l1.print_cola();
	l1.print_cola();
	l1.print_cola();
	

	system("pause");
	return 0;
}
