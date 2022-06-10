#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


struct node{
	int data;
	node *next;
	node *prev;
	 
};

class Linkedlist {
	private:
		node *header = new node;
		node *trailer = new node;
	public:
		Linkedlist(){
				header->next = trailer;
	            trailer->prev = header;
             	header->prev = NULL;
	            trailer->next = NULL;	
		}
		
		int  getFront() const;
		int getBack() const;
		void addFront (int dt);
		void addBack (int dt);
		void RemoveFront ();
		void RemoveBack ();
		void PrintCola ();
		void PrintPila();

	
};

int main (){
	
	LinkedList l1;
	l1.addFront(5);
	l1.addFront(3);
	l1.addFront(80);
	l1.addFront(54);
	l1.addFront(23);
	l1.addBack(1);
	l1.addBack(2);
	
	s1.PrintCola();
	
	system("pause");
	return 0;
}


int Linkedlist::getFront() const{
 return header->next->data;
}
int Linkedlist::getBack() const{
 return trailer->prev->data;
}
void Linkedlist::addFront(int dt){
	Node *nd = new node;
	nd->data = dt;
	nd->prev = header;
	nd->next = header->next;
	
	header->next->prev = nd;
	header->next-> nd;
}
void Linkedlist::addBack(int dt){
	Node *nd = new node;
	nd->data = dt;
	nd->prev = trailer-> prev;
	nd->next = trailer;
	
	trailer->prev->next = nd;
	trailer->prev-> nd;
}
void Linkedlist::RemoveFront(){
	Node *nd = header->next->next;
	delete header->next;
	
	header->next = nd;
	nd->prev =header;
}
void Linkedlist::RemoveBack(){
	Node *nd = trailer->prev->prev;
	delete trailer->prev;
	
	trailer->prev = nd;
	nd->next = trailer;
}
void Linkedlist::PrintCola(){
	Node nd* = trailer->prev;
	while(nd!=header){
		cout<< nd->data<<" ";
		nd= nd->prev;
	}
	
}
void Linkedlist::PrintPila(){
	Node nd* = header->next;
	while (nd!=trailer){
		cout<< nd->data<<" ";
		nd= nd->next;
	}
	
}

