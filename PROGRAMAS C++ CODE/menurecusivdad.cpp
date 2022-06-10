#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;

int factorial(int);
void menu();
int hola_mundo(int);
int funcion_cuadrada(int,int);

int main (){
	menu();
	getch();
	return 0;
}

void menu(){
	int opc, x;
	do{
		system("cls");
	cout<<"\t Menu de Recursividad"<<endl;
	cout<<"\n 1. Factorial:"<<endl;
	cout<<"\n 2. hola mundo 100 veces: "<<endl;
	cout<<"\n 3. funcion cuadrada: "<<endl;
	cout<<"\n 4. Salir"<<endl;
	cout<<" \n Opcion: ";
	cin>>opc;
	system("cls");
	
	switch (opc){
		case 1:
			cout<<" Dame un num: "<<endl;
			cin>>x;
			cout<<"\n el factorial es: "<<factorial(x)<<endl;
			
			break;
		case 2:
			cout<<" Dame un numero: "<<endl;
			cin>>x;
			cout<<"\n el resultado de 2f(x-1)+x^2"<<funcion_cuadrada(x,2)<<endl;
		     break;
	    case 3:
	    	hola_mundo(100);
	    	
		     break;
	    case 4:
		break;	
	}
	
}while(opc!=4);
	
}

int factorial(int n){
	if(n==0){
		n=1;
	}
	else{
		n = n * factorial(n-1);
	}
	return n;
}
int hola_mundo(int n){
	if(n==0){
		cout<<" hola mundo";
		n=1;
	}
	else{
		cout<<" hola mundo";
		n = n * factorial(n-1);
	}
	return n;

}
int funcion_cuadrada(int n,int z){
	int pot;
	if (z==1){
		pot= 2*(n-1)+n;
	}
	else{
		pot= (2*(n-1)+n)* funcion_cuadrada(n,n-1);
	}
}
