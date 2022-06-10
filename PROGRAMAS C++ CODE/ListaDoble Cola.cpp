#include<iostream>
#include<stdio.h>

struct node{
	int data;
	node *next;
	node *previous;
};

class Stack{
private:
	node *head = new node;
	node *tail = new node;
public:
	Stack(){
	head = NULL;
	tail = NULL;
	}
	void push(int);
	void pop();
};

void Stack::push(int d){
	node *nuevo_nodo = new node;

	if (head == NULL||tail == NULL){
	nuevo_nodo->data=d;
	nuevo_nodo->previous= tail;
	nuevo_nodo->next=tail;
	head=nuevo_nodo;
	tail=nuevo_nodo;
	std:: cout << "Nodo creado correctamente " << std::endl;
}
else{
	nuevo_nodo->data=d;
	nuevo_nodo->previous= tail;
	nuevo_nodo->next=tail;
	tail->next=nuevo_nodo;
	tail=nuevo_nodo;
	std:: cout  <<"Nodo creado correctamente" << std::endl;
}
}

void Stack::pop (){
	node* nuevo_nodo = new node;
	nuevo_nodo=tail;
	if (nuevo_nodo!=NULL){
	std::cout << nuevo_nodo->data << std::endl;
	tail = nuevo_nodo->next;
	delete nuevo_nodo;
	}
	else{
	std::cout << " Cannot show, empty stack " << std::endl;
	}
}

int main(){
	Stack s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.pop();
	s1.pop();
	s1.pop();
	s1.pop();
	system("pause");
	return 0;
}
