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
public:
	Stack(){
	head = NULL;
	}
	void push(int);
	void pop();
};

void Stack::push(int d){
	node *ptr = new node;

	if (head == NULL){
	ptr->data=d;
	ptr->previous= head;
	ptr->next=head;
	head=ptr;
	std:: cout << "Nodo creado correctamente " << std::endl;
}
else{
	ptr->data=d;
	ptr->previous= head;
	ptr->next=head;
	head->next=ptr;
	head=ptr;
	std:: cout  <<"Nodo creado correctamente" << std::endl;
}
}

void Stack::pop (){
	node* ptr = new node;
	ptr=head;
	if (ptr!=NULL){
	std::cout << ptr->data << std::endl;
	head = ptr->previous;
	delete ptr;
	}
	else{
	std::cout << " no hay, esta vacia  " << std::endl;
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
