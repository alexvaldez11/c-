#include<iostream>
using namespace std;
 
struct Node {
	char data;
	struct Node *izq;
	struct Node *der;
};

void Preorder(struct Node *root) {
	if(root == NULL) return;

	printf("%c ",root->data);
	Preorder(root->izq);
	Preorder(root->der);
}


void Inorder(Node *root) {
	if(root == NULL) return;

	Inorder(root->izq);       
	printf("%c ",root->data); 
	Inorder(root->der);     
}


void Postorder(Node *root) {
	if(root == NULL) return;

	Postorder(root->izq);
	Postorder(root->der);
	printf("%c ",root->data);
}


Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->izq = root->der = NULL;
	}
	else if(data <= root->data)
		root->izq = Insert(root->izq,data);
	else 
		root->der = Insert(root->der,data);
	return root;
}
 
int main() {
	
	cout<<"        M\n";
	cout<<"   B        Q \n";
	cout<<" A  C     Z \n";
	cout<<" \n";

	Node* root = NULL;
	root = Insert(root,'M'); root = Insert(root,'B');
	root = Insert(root,'Q'); root = Insert(root,'Z'); 
	root = Insert(root,'A'); root = Insert(root,'C');
 
	cout<<"Preorder: ";
	Preorder(root);
	cout<<"\n";

	cout<<"Inorder: ";
	Inorder(root);
	cout<<"\n";

	cout<<"Postorder: ";
	Postorder(root);
	cout<<"\n";
}
