#include<stdio.h>
#include<iostream>
#include<conio.h>
//estructura dinamica
using namespace std;

struct Persona {
	char nombre[30];
	int edad;
}persona, *puntero_persona= &persona;

void pedirdatos();//prototipo
void mostrardatos(Persona*);

int main(){
	pedirdatos();
	mostrardatos(puntero_persona);
	getch();
	return 0;
}

void pedirdatos (){
	cout<<"Digite su nombre: ";
	//cin>>getline(persona.nombre,30,´\n´);
	cin.getline(puntero_persona->nombre,30,'\n');
	cout<<endl;
	cout<<"deme su edad: ";
	//cin>>persona.edad;si es estatica
	cin>>puntero_persona->edad;
}

void mostrardatos(Persona *puntero_persona){
	cout<<"\n El nombre es: "<<puntero_persona->nombre<<endl;
	cout<<"\n La edad es: "<<puntero_persona->edad<<endl;
	
}
